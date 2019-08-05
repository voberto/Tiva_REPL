// Evaluate.c

// 1. Include section

#include "Evaluate.h"


// 2. Function declaration

int32_t i32_LoopLib_Evaluate(char* g_cInput)
{
	int32_t i32_CommandStatus = 0;
	i32_CommandStatus = CmdLineProcess(g_cInput);

	return(i32_CommandStatus);
}
