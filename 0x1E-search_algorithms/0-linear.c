#include "search_algos.h"
/**
*linear_search - searches for a value in an array of integers
*@array: is a pointer to the first element of the array to search
*
*@size: is the number of elements in array
*
*@value: is the value to search for
*Return: an integer
*/
int linear_search(int *array, size_t size, int value)
{
	 size_t i;
	 int *k = array;

for (i = 0; i <= size - 1; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
if (k == NULL || size <= 0)
return (-1);
}
return (-1);
}
