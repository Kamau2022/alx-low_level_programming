#include "monty.h"

/**
*main - monty code interpreter
*@argc: number of arguments
*@argv: monty file location
*
*Return: 0 on success
*/

int main(int argc, char* argv[])
{
char *content = NULL;
FILE *file;
size_t size = 0;
ssize_t readline;
stack_t *stack = NULL;
unsigned int counter = 0;

if (arg != 2)
{
fprintf(stderr, "USAGE:monty file \n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if(file == NULL)
{
fprintf(stderr, "Error:can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (read_line > 0)
{
read_line = getline(&content, &size, file);
counter++;
if (read_line > 0)
{
execute (content, &stack, counter, file);
}
free (content);
}
free_stack(stack);
fclose(file);
return (0);
}









