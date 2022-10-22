#include<stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
*hash_table_create -  a function that creates a hash table.
*@size: the size of the array
*
*Return: hash table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_table_t));

if (hash_table == NULL)
{
return (NULL);
}
hash_table->size = size;
return (hash_table);
}
