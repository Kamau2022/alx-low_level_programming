#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
*new_dog - a function that creates a new dog
*@:name: name of the dog
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
dog_t *dog = malloc(sizeof(struct new_dog));
if (dog == NULL)
{
free(dog);
}
if (dog != NULL)
{
dog->name = strdup(name);
dog->age = age;
dog->owner = strdup(owner);
}
return dog;
}
