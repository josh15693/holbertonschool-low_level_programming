#include "dog.h"
#include <stdio.h>
/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A structure that holds a dog's name, age, and owner.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

if (d->age < 0)
{
printf("Age: (nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}
    
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
