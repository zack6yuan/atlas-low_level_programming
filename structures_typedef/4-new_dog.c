#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog and stores a copy of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *puppy;
int x = 0
int y = 0, z;

for (x = 0; name[x] != '\0'; x++) /*loop for dog's name*/
for (y = 0; owner[y] != '\0'; y++) /*loop for dog's owner*/

puppy = malloc(sizeof(dog_t));
if (puppy == NULL)
{
free(puppy);
return (NULL);
}
puppy->name = malloc(x * sizeof(char));
puppy->owner = malloc(y * sizeof(char));

if (puppy->name == NULL)
{
free(puppy->name);
}
if (puppy->owner == NULL)
{
free(puppy->owner);
}
free(puppy);
return (NULL);