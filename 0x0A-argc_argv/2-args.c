#include <stdlib.h>
#include <stdio.h>

/**
*main - check main
*@argc: number of arguments
*@argv: an array of strings
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
