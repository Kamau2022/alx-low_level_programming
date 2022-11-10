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
/*while (name[len_name])
{
len_name++;
}
while (owner[len_owner])
{
len_owner++;
}*/
cpy_name = malloc(sizeof(char));
if (cpy_name == NULL)
	return (NULL);
while (k <= 0)
{
for (i = 0; name[i]; i++)
{
cpy_name[i] = name[i];
}
cpy_name[i] = '\0';
k++;
}
cpy_owner = malloc(sizeof(char));
if (cpy_owner == NULL)
{
return (NULL);
}
while (k <= 0)
{
for (i = 0; owner[i]; i++)
{
cpy_owner[i] = owner[i];
}
k++;
cpy_owner[i] = '\0';
}
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = cpy_name;
dog->age = age;
dog->owner = cpy_owner;
return (dog);
}
