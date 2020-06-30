//app.h
#include "ev3api.h"

#define MAIN_PRIORITY    (TMIN_APP_TPRI + 1)

#ifndef STACK_SIZE
#define STACK_SIZE      (4096)
#endif /* STACK_SIZE */

#ifndef TOPPERS_MACRO_ONLY

extern void main_task(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */
