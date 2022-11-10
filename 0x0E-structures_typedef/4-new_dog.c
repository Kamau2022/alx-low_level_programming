#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
*new_dog - a function that creates a new dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*
*Return: NULL on fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *cpy_name, *cpy_owner;
dog_t *dog;
int i, k = 0;

if (name == NULL || owner == NULL)
return NULL;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
cpy_name = malloc(sizeof(char));
if (cpy_name == NULL)
	return (NULL);
for (i = 0; name[i]; i++)
cpy_name[i] = name[i];
cpy_name[i] = '\0';
k++;

cpy_owner = malloc(sizeof(char));
if (cpy_owner == NULL)
{
return (NULL);
}
for (i = 0; owner[i]; i++)
cpy_owner[i] = owner[i];
cpy_owner[i] = '\0';

dog->name = strdup(name);
dog->age = age;
dog->owner = strdup(owner);
return (dog);
}
