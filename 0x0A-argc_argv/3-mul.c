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

	int result;
	int i;
	int j;

	if (argc == 3)
	{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
	}
	return (0);
}
