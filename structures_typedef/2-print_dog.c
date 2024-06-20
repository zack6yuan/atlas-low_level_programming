#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return; /*return nothing*/
/*using "?", if != NULL, prints value, otherwise prints "nil"*/
printf("Name: %s\n", d ->name ? d->name : "(nil)"); /*string format*/
printf("Age: %f\n", d->age); /*float format*/
printf("Owner: %s\n", d->owner ? d->owner : "(nil)"); /*string format*/
}