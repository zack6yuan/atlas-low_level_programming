#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees a dog
 * @d: dog that is being freed
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d); /*dont free float age because it's mem auto allocates*/
}
}
