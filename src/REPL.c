// REPL.c

// 1. Include section
#include "REPL.h"

// 2. Function declaration section
// 2.1. REPL main loop function
void REPL_MainLoop(void)
{
	int32_t i32_CommandStatus = 0;

	while(1)				// Loop;
	{
		UARTprintf(">>");  	// Command line characters;

		LoopLib_Read();												// Read the command;
		i32_CommandStatus = i32_LoopLib_Evaluate(g_cInput_Read());	// Evaluate the command;
		LoopLib_Print(i32_CommandStatus);							// Print answer;
	}
}
