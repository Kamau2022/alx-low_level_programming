#include <stdio.h>
#include "dog.h"

/**
*print_dog - a function that prints a struct dog
*@d: a pointer to a struct dog
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("\n");
}
if ((d->name) == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("(nil)");
}
if (d->name == NULL)
{
printf("(nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
