// Comm.h

#ifndef TEST_BOARD_PGC_CORE_PGC_CORE_H_
#define TEST_BOARD_PGC_CORE_PGC_CORE_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>

#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"

#include "libs/uartstdio.h"

// 2. Define section

// 3. Prototype section

void ConfigLib_Comm_UART0Config(void);

#endif /* TEST_BOARD_PGC_CORE_PGC_CORE_H_ */
