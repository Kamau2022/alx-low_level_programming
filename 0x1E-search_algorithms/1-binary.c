#include "search_algos.h"
/**
*binary_search - searches for a value in an array of integers
*@array: is a pointer to the first element of the array to search
*
*@size: is the number of elements in array
*
*@value: is the value to search for
*Return: an integer
*/
int binary_search(int *array, size_t size, int value)
{
	 size_t mid, l, r, i;
	 int *k = array;
	 l = 0;
	 r = size -1;

if (k == NULL)
{
return (-1);
}
for (i = 0; i < r; i++)
{
printf ("Searching in array: %d", array[i]);
while (l < r) 
{
mid = (l + r) / 2;
if (array[mid] == value)

return (mid);

if (array[mid] < value)
l = mid + 1;
else
r = mid -1;
}
}
return (-1);
}



