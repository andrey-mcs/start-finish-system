
#include "lib_Network\network.h"



void InitNetwork(void)
{
    UART_XB_Start();
    
    #ifdef DEBUG_PC
    SW_UART_DEBUG_Start();
    SW_UART_DEBUG_PutString("\n\nInit network start\n\n");
    UART_XB_UartPutString("BLABLABLA");
    #endif
    
    inData.readStatus = NO_READ;
    outData.writeStatus = WRITE_OK;
    outData.IDpacket = 0xFF;
    networkStatus = NETWORK_DISCONN;   
    UART_XB_SpiUartClearRxBuffer();
}

void SendData(void)
{
    if(outData.writeStatus == NO_WRITE && inData.readStatus == READ_OK)
    { 
        if (inData.IDpacket == outData.IDpacket)
        {
            /*send previous packet*/
            
            UART_XB_UartPutString(previousData);
            outData.writeStatus = WRITE_OK;
            inData.readStatus = NO_READ;
        }else
        {
            /*send nex packet*/
            
            char sendBuffer[DATA_BUFFER];
            char sendData[DATA_BUFFER];
            
            /*pack data*/
            sprintf(sendData,"%02X:%08X%08X%04X%02X",
                    0u,
                    (uint32_t)((outData.unixStartTime & MASK_HIGH) >> DATA_SHIFT), 
                    (uint32_t)(outData.unixStartTime & MASK_LOW), 
                    outData.startMsTime, 
                    outData.newSkier);
            
            
            PackData(sendBuffer, (uint8_t *)sendData, inData.IDpacket);
            UART_XB_UartPutString(sendBuffer);
            

            outData.newSkier = !NEW_SKIER_IN_TARCK;
                
            outData.writeStatus = WRITE_OK;
            outData.IDpacket = inData.IDpacket;
            inData.readStatus = NO_READ;
            #ifdef DEBUG_PC
            SW_UART_DEBUG_PutString("out data - "); 
            SW_UART_DEBUG_PutString(sendBuffer);   
            SW_UART_DEBUG_PutString("\n\r");
            #endif   
            strcpy(previousData, sendBuffer);
        }
    }
}


uint32_t ReceiveData(void)
{
    if(outData.writeStatus == WRITE_OK && inData.readStatus == NO_READ)
    {
        uint32_t byte;
        struct Resp recvData;
          
        while((UART_XB_SpiUartGetRxBufferSize() > 0) && ((byte=UART_XB_UartGetChar()) != 0))
        { 
            UnpackData(&recvData, (uint8_t)(byte & 0xFF));
            
            #ifdef DEBUG_PC
            //SW_UART_DEBUG_PutString("\nbyte - ");
            SW_UART_DEBUG_PutChar(byte);
            #endif
            
            if(recvData.EndPacket == 1)
            {                      
                inData.IDpacket = recvData.Seq;
                
                inData.readStatus = READ_OK;
                outData.writeStatus = NO_WRITE;
                
                /*connect network*/
                networkStatus = NETWORK_CONN;
                noConnect = 0;
                /*write data*/
                inData.countSkiers = recvData.Data3;
                //inData.unixStartTime = recvData.Data1;
                inData.ready = (recvData.Data2 & 0xFF00) >> 8;
                inData.reboot = recvData.Data2 & 0x00FF;
                /*next packet*/
                //outData.IDpacket++;
                #ifdef DEBUG_PC
                SW_UART_DEBUG_PutString("       READ DATA OKEY");   
                SW_UART_DEBUG_PutString("\n\r");
                #endif 

                return  NETWORK_CONN;  
            }
        }
        
        #ifdef DEBUG_PC
        //SW_UART_DEBUG_PutString("\nERROR READ!!!!");   
        //SW_UART_DEBUG_PutString("\n\r");
        #endif 
        
        /*tyme to respond*/
        if(noConnect++ >= NETWORK_TIMEOUT)
        {
            networkStatus = NETWORK_DISCONN;
        }
        return  NETWORK_DISCONN;
    }
    return 0;
}


uint32_t NetworkStatus(void)
{
    return networkStatus;
}


void SendSkierStart(uint64_t unixTimeStart, uint32_t recentMs)
{
    outData.unixStartTime = unixTimeStart;
    outData.startMsTime = recentMs;
    outData.newSkier = NEW_SKIER_IN_TARCK;
}


uint32_t FinReady(void)
{
    /*uint32_t result;
    
    if(finNoReady <= TIMEOUT_FIN_READY )
    {
        if(inData.ready == READY)
        {
            finNoReady = 0;
        }else
        {
            finNoReady++;    
        }
        
        result = READY;
    }else 
    {
        result = NO_READY;
        finNoReady = TIMEOUT_FIN_READY;
    }
    
    return result;*/
    return inData.ready;
}


uint32_t FinWriteInDB(void)
{
    uint32_t result;
    
    if(outData.newSkier == NEW_SKIER_IN_TARCK)
    {
        result = NO_WRITE;
    }else
    {
        result = WRITE_OK;
    }
    
    return result;
}


uint32_t NTPsync(void)
{
    int i;
    uint16_t result;
    uint32_t IDreceivePacket;
    uint32_t lastIDpacket;
    uint32_t unixTime[2];
    uint16_t millisTime[2];
    uint32_t resultReceive;
    uint32_t noConnect;
    

    noConnect = 0;
    lastIDpacket = 0xff;
    #ifdef DEBUG_PC 
        char buffer[100];
    #endif
    
    for(i=0; (i < NUM_TRY_SYNC) && (noConnect <= NUM_CONNECT_ATTEMPS) ;)// && (IDreceivePacket != lastIDpacket);)
    {      
        /*receive time from start*/
        resultReceive = NTPreceiveTime(&unixTime[T2],&millisTime[T2], &IDreceivePacket, !SAVE_TIME);
        
        #ifdef DEBUG_PC 
        if(resultReceive == READ_OK)
        {
            sprintf(buffer,"\n\rt2= %u:%u\n\r",unixTime[T2],millisTime[T2]);
            SW_UART_DEBUG_PutString(buffer);
        }
        sprintf(buffer,"Start i= %u, noConnect= %u\n\r",i,noConnect);
        SW_UART_DEBUG_PutString(buffer);
        #endif
        
        if(resultReceive == READ_OK)
        {
            /*send real time to start*/
            unixTime[T3] = RTCGetUnixTime();
            millisTime[T3] = RTCgetRecentMs();
            NTPsendTime(unixTime[T2], unixTime[T3], millisTime[T2], millisTime[T3], IDreceivePacket);

            #ifdef DEBUG_PC 
            sprintf(buffer,"\n\real time is= %u:%u\n\r",unixTime[T3],millisTime[T3]);
            SW_UART_DEBUG_PutString(buffer);
            #endif
            noConnect=0;
            if(lastIDpacket != IDreceivePacket)
            {
                lastIDpacket = IDreceivePacket;
                i++;
            }
            
        }else 
        {
            noConnect++;
            
            #ifdef DEBUG_PC
            CyDelay(1000);
            #endif
        }
    }
    
    
    if(noConnect >= NUM_CONNECT_ATTEMPS)
    {
        result = TIME_SYNC_ERR;
    }else
    {
        /*write time and ms in rtc*/
        resultReceive = NTPreceiveTime(&unixTime[T2],&millisTime[T2], &IDreceivePacket, SAVE_TIME);
        if(resultReceive == READ_OK)
        {
             RTCSync(unixTime[T2], millisTime[T2]);
        }
        NTPsendTime(0,0,0,0,IDreceivePacket);
        
        result = TIME_SYNC_OK;
    }
    return result;
}


static uint32_t NTPreceiveTime(uint32_t *unixTime2,uint16_t *millisTime2, uint32_t *IDreceive,uint32_t saveTime)
{
    uint8_t byte;
    uint32_t result;
    /*debug*/
    result = READ_OK;
    
    NTPResp recvDataNTP;
    while((UART_XB_SpiUartGetRxBufferSize() > 0) && ((byte=UART_XB_UartGetChar()) != 0))
    {
        result = NtpUnpackData(&recvDataNTP, (uint8_t)(byte & 0xFF));
        
        #ifdef DEBUG_PC
        SW_UART_DEBUG_PutChar(byte);
        #endif
                    
        if(recvDataNTP.EndPacket == 1)
        {
            /*save unix time*/
            
            *IDreceive = recvDataNTP.Id;
            if(saveTime == SAVE_TIME)
            {
                *unixTime2 = recvDataNTP.Data1;
                *millisTime2 = recvDataNTP.DataMs1;
            }else
            {
                *unixTime2 = RTCGetUnixTime();
                *millisTime2 = RTCgetRecentMs();
            }
           
            return READ_OK;
        }
        result = NO_READ;
    }
    result = NO_READ;
    
    return result;
}

static void NTPsendTime(uint32_t unixTime2,uint32_t unixTime3,uint16_t millis2,uint16_t millis3, uint32_t ID)
{
    char sendBuffer[DATA_BUFFER];
    char sendData[DATA_BUFFER];
    
    /*pack data*/
    sprintf(sendData,"%08X%03X%08X%03X", unixTime2, millis2, unixTime3, millis3); 
    PackData(sendBuffer, (uint8_t *)sendData, ID);
    UART_XB_UartPutString(sendBuffer);
    
    #ifdef DEBUG_PC
    SW_UART_DEBUG_PutString(sendBuffer);
    #endif
}
/* [] END OF FILE */
