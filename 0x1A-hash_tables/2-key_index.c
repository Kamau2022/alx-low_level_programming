#include "hash_tables.h"
/**
*key_index - gives the index of a key
*@key: the key
*
*@size: size of the array of the hash table
*
*Return: index of the key/value pair
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h, k;
h = hash_djb2(key);
k = h % size;
return (k);
}
