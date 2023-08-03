#include <stc8h.h>
#define MAX_TASKS 2
#define MAX_TASK_DEP 32

unsigned char task_sp[MAX_TASKS]; 
unsigned char task_stack[MAX_TASKS][MAX_TASK_DEP];