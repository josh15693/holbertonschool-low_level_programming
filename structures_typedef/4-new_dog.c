#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len_name = 0;
int len_owner = 0;
int i = 0;
dog_t *new_dog;

if (name == NULL || age < 0 || owner == NULL)
return NULL;

while (name[len_name] != '\0')
len_name++;
    
while (owner[len_owner] != '\0')
len_owner++;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;

new_dog->name = malloc((sizeof(char) * len_name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}

new_dog->owner = malloc((sizeof(char) *len_owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}

while (i < len_name)
{
new_dog->name[i] = name[i];
i++;
}

new_dog->name[len_name] = '\0';
i = 0;
    
while (i < len_owner)
{
new_dog->owner[i] = owner[i];
i++;
}
new_dog->owner[len_owner] = '\0';
    
new_dog->age = age;
return (new_dog);
}
