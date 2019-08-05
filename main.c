// Main file for "REPL_Tiva" project

// 1. Include section

#include "src/Config/Core/Core.h"
#include "src/Config/Comm/Comm.h"
#include "src/Config/Temp/Temp.h"

#include "src/REPL.h"

// 2. Main function section

int main()
{
	// 1. Configuration section;
	// 1.1. Configure and enable core clock at 80 MHz;
	ConfigLib_CoreClock_Set80MHz();

	// 1.2. Configure and enable user communication module ("User_Comm" library -> UART0 peripheral);
	ConfigLib_Comm_UART0Config();

	// 1.3. Configure and enable internal temperature sensor (ADC0 peripheral)
	ConfigLib_Temp_ADC0Set();

	// 1.4. Enable interrupts;
	IntMasterEnable();

	// 2. Loop section;
	// 2.1. Print initial splash screen;
	WelcomeScreen_Print();

	// 2.2. Execute REPL main loop;
	REPL_MainLoop();
}
