// Read.h

#ifndef READ_H_
#define READ_H_

// 1. Define section

#define APP_INPUT_BUF_SIZE	128

// 2. Include section

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../Config/Comm/libs/uartstdio.h"

// 3. Prototype section

char *g_cInput_Read(void);
void LoopLib_Read(void);

#endif /* READ_H_ */
