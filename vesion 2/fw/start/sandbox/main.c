/*START*/
#include "test.h" // Empty library functions
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/*frequency blinc led*/
#define INIT_BLINK 	2 
#define ERR_BLINK 	10

/*led state*/
#define LED_ENABLE 	1
#define LED_DISABLE	0

bool CheckRoaderReadyToStart(void);
void SystemInit(void);
void SkierStart(void);
void ErrorStarted(void);


	
int main(void)
{
	SystemInit() ;
	
	for(;;)
	{
		while(!SystemReadyToStart())
		{
			ErrorStarted();
		}
		SkierStart();
	}
}


void SystemInit(void)
{
	// May process other function for reporting errors
	LedBlink(INIT_BLINK);
	DisplayConfig();
	RTC_Start();	
	
	while ((!CheckConnections()) && (!RTS_Sync())
	{
		DisplayPrintf("Error init system");
	}
}


bool SystemReadyToStart(void)
{
	bool result;
	
	result = false;
	if(!GateOpen() && CheckFinishReady() && DatabaseSync())
	{
		result = true;
	}
	
	return result;
}

void SkierStart(void)
{
	uint32_t time;
		
	SetLedState(LED_ENABLE);	
	while(!GateOpen());
	time = RTC_GetTime();
	if(!DatabaseWrite(time))
	{
		DisplayPrintf("Error record time");
	}
	DisplayPrintf(time);	
}

void ErrorStarted(void)
{
	DisplayPrintf("Error");
	LedBlink(ERR_BLINK);
}