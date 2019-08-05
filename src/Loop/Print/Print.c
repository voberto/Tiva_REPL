// Print.c

// 1. Include section

#include "Print.h"

// 2. Function declaration section

void LoopLib_Print(int32_t i32_CmdStatus)
{
	switch(i32_CmdStatus)
	{
		case CMDLINE_BAD_CMD: 			// Handle the case of bad command.
			BadCmd_Print();
			break;

		case CMDLINE_TOO_MANY_ARGS:		// Handle the case of too many arguments.
			TooManyArgs_Print();
			break;

		case CMD_HELP:					// Command "help" was entered.
			Help_Print();
			break;

		case CMD_CLEARSCREEN:			// Command "clear" was entered.
			ClearScreen_Print();
			break;

		case CMD_CORECLOCK:				// Command "clock" was entered.
			CoreClock_Screen();
			break;

		case CMD_TEMP:
			CoreTemp_Screen();
			break;

		default:
			break;
	}
}
