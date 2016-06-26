#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

	void LedInit(void);
	void LedBlink(uint8_t Frequency);
	void SetLedState(uint8_t State);
	
	void DisplayConfig(void);	
	void DisplayPrintf(char *DisplayInfo);
		
	void RTC_Start(void);
	bool RTS_Sync(void);
	uint32_t RTC_GetTime(void);
	
	bool CheckConnections(void);
	bool CheckFinishReady(void);
	
	bool GateOpen(void);
	
	bool DatabaseSync(void);
	bool DatabaseWrite(uint32_t);

/*******************************************************************************
* Function name: LedInit
********************************************************************************
*
* initialization led indicator:
*	TIMER...
*
* Return:
*  None.
*******************************************************************************/
	void LedInit(void);
	
/*******************************************************************************
* Function name: LedBlink
********************************************************************************
*
* Function flashing indicator function with a given frequency
*
* Parameters:
* Frequency - frequency flashing
*
* Return:
*  None.
*******************************************************************************/	
	void LedBlink(uint8_t Frequency);

/*******************************************************************************
* Function name: SetLedState
********************************************************************************
*
* Function indicator on or off
*
* Parameters:
* State - on(1) or off(0)
*
* Return:
*  None.
*******************************************************************************/	
	void SetLedState(uint8_t State);

/*******************************************************************************
* Function name: DisplayConfig
********************************************************************************
*
* initialization display
*
* Return:
*  None.
*******************************************************************************/	
	void DisplayConfig(void);	
	
/*******************************************************************************
* Function Name: DisplayPrintf
********************************************************************************
*
* Summary:
*  Writes a zero terminated string to the LCD.
*
* Parameters:
*  string: Pointer to head of char8 array to be written to the LCD module
*
* Return:
*  None.
*******************************************************************************/
	void DisplayPrintf(char DisplayInfo[]);
	
	
/*******************************************************************************
* Function Name: RTC_Start
********************************************************************************
*
* Summary:
*  Performs all the required calculations for the time and date registers and
*  initializes the component along with the date and time selected in the
*  customizer. If "Implement RTC update manually" is disabled in the customizer
*  and if WDT is selected as a source in the clocks configuration window
*  (low frequency clocks tab), attaches RTC_Update API to a corresponding
*  WDT's ISR callback.
*
* Parameters:
*  None.
*
* Return:
*  None.
*******************************************************************************/		
	void RTC_Start(void);
	
/*******************************************************************************
* Function Name: RTS_Sync
********************************************************************************
*
* * synchronize time with an external RTC
*
* Parameters:
*  None.
*
* Return:
*  true(successful sync) or false(not successful sync))
*******************************************************************************/
	bool RTS_Sync(void);
	
/*******************************************************************************
* Function Name: RTC_GetTime
********************************************************************************
*
* Summary:
*  Reads the current time.
*
* Parameters:
*  None.
*
* Return:
*  date: The value of date in the user selected format. The date value is available
*        in the BCD format.
*
* Side Effects:
*  Using RTC_1_GetTime and RTC_GetDate API separately might result
*  in errors when the time wraps around the end of the day. To avoid this,
*  use RTC_1_GetDateAndTime API.
*******************************************************************************/
	uint32_t RTC_GetTime(void);
	
/*******************************************************************************
* Function Name: CheckConnections
********************************************************************************
*
* * Check connections to start(finish)
*
* Parameters:
*  None.
*
* Return:
*  true(connection is established) or false(error connection))
*******************************************************************************/
	bool CheckConnections(void);

/*******************************************************************************
* Function Name: CheckFinishReady
********************************************************************************
*
* * Readiness to finish work
*
* Parameters:
*  None.
*
* Return:
*  true(ready) or false(not be ready))
*******************************************************************************/	
	bool CheckFinishReady(void);
	

/*******************************************************************************
* Function Name: GateOpen
********************************************************************************
*
* * verification or gate closed
*
* Parameters:
*  None.
*
* Return:
*  true(gate closed) or false(gate not closed))
*******************************************************************************/
	bool GateOpen(void);
	
/*******************************************************************************
* Function Name: DatabaseSync
********************************************************************************
*
* * Synchronization own database with external
*
* Parameters:
*  None.
*
* Return:
*  true(sync successful) or false(synchronization is not successful))
*******************************************************************************/	
	bool DatabaseSync(void);
	
/*******************************************************************************
* Function Name: DatabaseWrite
********************************************************************************
*
* * record the results in a database
*
* Parameters:
*  None.
*
* Return:
*  true(record successful) or false(record is not successful))
*******************************************************************************/
	bool DatabaseWrite(uint32_t);
		