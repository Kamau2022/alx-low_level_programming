#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
*new_dog - a function that creates a new dog
*struct new_dog:  a struct of new_dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*
*Return: NULL on fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{

struct new_dog
{
char *name;
float age;
char *owner;
};
char *k = strdup(name);
char *l = strdup(owner);
dog_t *dog = malloc(sizeof(struct new_dog));
if (dog == NULL)
{
return (NULL);
}
if (dog != NULL)
{
dog->name = strdup(name);
dog->age = age;
dog->owner = strdup(owner);
}
if (k == NULL)
{
return (NULL);
}
if (l == NULL)
{
return (NULL);
}
return (dog);
}
