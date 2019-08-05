// Comm.c

// 1. Include section

#include "Comm.h"

// 2. Function declaration section

// 2.1. Configure user communication module (UART0);
void ConfigLib_Comm_UART0Config(void)
{
	// 1. Enable GPIOA;
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

	// 2. Set GPIO A0 and A1 as UART pins.
	GPIOPinConfigure(GPIO_PA0_U0RX);
	GPIOPinConfigure(GPIO_PA1_U0TX);
	GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

	// 3. Call UART configuration function;
	UARTStdioConfig(0, 115200, SysCtlClockGet());
}
