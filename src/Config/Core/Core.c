// Core.c

// 1. Include section

#include "Core.h"

// 2. Function declaration section

// 2.1. Configure and enable core clock at 80 MHz;

void ConfigLib_CoreClock_Set80MHz(void)
{
	SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
}

// 2.2 Returns core clock value.

uint32_t ui32_ConfigLib_CoreClock_Get(void)
{
	return(SysCtlClockGet());
}


