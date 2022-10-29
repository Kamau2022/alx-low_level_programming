#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
*hash_table_set - a function that adds an element to the hash table
*@ht: a pointer to a hash table
*@key: the key
*@value: value associated with the key
*Return: 1 on success 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node, *temp, *newnode;
unsigned long int index, k;
node = malloc(sizeof(hash_node_t));
node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;
if (node == NULL)
{
return (0);
}
k = hash_djb2((unsigned char*)key);

index = k % ht->size;
if (ht->array[index] == NULL)
{
ht->array[index] = node;
}
else if (strcmp(ht->array[index]->key, key) == 0)
{
strcpy(ht->array[index]->value, value);
}
else
{
temp = node;
while (temp->next->next)
{
temp = temp->next;
}
temp->next = node;
}
newnode = node;
newnode->key = strdup(key);
newnode->value = strdup(value);
newnode->next = NULL;
return (1);
}
