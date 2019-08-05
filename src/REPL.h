// REPL.h

#ifndef SRC_REPL_H_
#define SRC_REPL_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>
#include "globaldefs.h"
#include "Loop/Read/Read.h"
#include "Loop/Eval/Evaluate.h"
#include "Loop/Print/Print.h"

// 2. Prototype section

void REPL_MainLoop(void);

#endif /* SRC_REPL_H_ */
