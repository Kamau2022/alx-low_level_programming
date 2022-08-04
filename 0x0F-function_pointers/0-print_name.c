#include "function_pointers.h"
#include <string.h>

void print_name(char *name, void(*f)(char *))
{
(*f) (name);
}
