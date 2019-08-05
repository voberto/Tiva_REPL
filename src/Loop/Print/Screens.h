// Screens.h

#ifndef SCREENS_H_
#define SCREENS_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>
#include "../../Config/Comm/libs/uartstdio.h"
#include "../../Config/Core/Core.h"
#include "../../Config/Temp/Temp.h"
#include "Lines.h"
#include "../Eval/cmdline.h"

// 2. Define section

// 3. Prototype section

void ClearScreen_Print(void);
void FirstScreen_Print(void);
void WelcomeScreen_Print(void);
void BadCmd_Print(void);
void TooManyArgs_Print(void);
void Help_Print(void);
void CoreClock_Screen(void);
void CoreTemp_Screen(void);

#endif /* SCREENS_H_ */
