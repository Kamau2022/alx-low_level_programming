#include <stdlib.h>
#include <stdio.h>

/**
*main - check main
*@argc: number of arguments
*@argv: an array of strings
*Return: Always 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	int k = argc - 1;

	printf("%d\n", k);
	return (0);
}
