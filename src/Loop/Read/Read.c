// Read.c

// 1. Include section

#include "Read.h"
#include "../Print/Lines.h"
#include "../Print/Screens.h"

// 2. Variable declaration section

static char g_cInput[APP_INPUT_BUF_SIZE];

char *g_cInput_Read(void)
{
	return(g_cInput);
}

// 3. Function declaration section

// 3.1. Read function
void LoopLib_Read(void)
{
	// Peek to see if a full command is ready for processing
	//
	while(UARTPeek('\r') == -1)
	{

	}
	//
	// A '\r' was detected, get the line of text from the user.
	//
	UARTgets(g_cInput, sizeof(g_cInput));
}


