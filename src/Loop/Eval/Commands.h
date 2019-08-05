// Commands.h

#ifndef COMMANDS_H_
#define COMMANDS_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>

#include "../../globaldefs.h"

#include "cmdline.h"
#include "../Print/Lines.h"

#include "../../REPL.h"

// 2. Define section
// 2.1. Command table

#define CMD_HELP			1
#define CMD_CLEARSCREEN		2
#define CMD_CORECLOCK		3
#define CMD_TEMP			4

// 3. Prototype section

int i_CMD_help(int argc, char **argv);
int i_CMD_clearscreen(int argc, char **argv);
int i_CMD_coreclock(int argc, char **argv);
int i_CMD_temp(int argc, char **argv);

#endif /* COMMANDS_H_ */
