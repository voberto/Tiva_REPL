// Screens.c

// 1. Include section

#include <time.h>
#include "Screens.h"

// 2. Function declaration section

// 2.1. Clear screen
void ClearScreen_Print(void)
{
	UARTprintf("\033[2J");	 		// Clear screen;
	UARTprintf("\033[0;0H"); 		// Set cursor to 0,0;
}

// 2.2. Prints first screen
void FirstScreen_Print(void)
{
	UARTprintf(INITSCR_LINEONE);
	UARTprintf("\n");
	UARTprintf(INITSCR_LINETWO);
	UARTprintf("\n\n");
}

// 2.3. Prints welcome screen
void WelcomeScreen_Print(void)
{
	ClearScreen_Print();
	FirstScreen_Print();
}

// 2.4. Bad command screen
void BadCmd_Print(void)
{
	UARTprintf("Bad command!\n");
}

// 2.5. Too many arguments screen
void TooManyArgs_Print(void)
{
	UARTprintf("Too many arguments for command processor!\n");
}

// 2.6. Help screen
void Help_Print(void)
{
    int32_t i32Index;
	//
	// Start at the beginning of the command table
	//
	i32Index = 0;

	//
	// Get to the start of a clean line on the serial output.
	//
	UARTprintf("\nAvailable commands:\n-------------------\n\n");

	//
	// Display strings until we run out of them.
	//
	while(g_psCmdTable[i32Index].pcCmd)
	{
		UARTprintf("%6s %s\n", g_psCmdTable[i32Index].pcCmd,
				g_psCmdTable[i32Index].pcHelp);
		i32Index++;
	}

	//
	// Leave a blank line after the help strings.
	//
	UARTprintf("\n");
}

// 2.7. Core clock screen
void CoreClock_Screen(void)
{
	UARTprintf("Core clock is: ");
	UARTprintf("%d",(char *)ui32_ConfigLib_CoreClock_Get());
	UARTprintf(" Hz.");
	UARTprintf("\n");
}

// 2.8. Temperature screen with timestamp
void CoreTemp_Screen(void)
{
	UARTprintf("Temperature now is ");
	UARTprintf("%d",(char *)ui32_TempCelsius_IntegerPart_Read());	// Print integer part of temperature;
	UARTprintf(".");
	UARTprintf("%d",(char *)ui32_TempCelsius_DecimalPart_Read());	// Print decimal part of temperature;
	UARTprintf(" \u00b0");											// Unicode symbol for the degree character;
	UARTprintf("C");
	UARTprintf("\n");
}
