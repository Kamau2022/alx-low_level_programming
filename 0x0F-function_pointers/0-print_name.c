#include "function_pointers.h"
#include <string.h>
/**
*print_name - a function that prints a name
*@name: name to print
*@f: function to send the name to
*Return: nothing
*/

void print_name(char *name, void(*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f) (name);
}
