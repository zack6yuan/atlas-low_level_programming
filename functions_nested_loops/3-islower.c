#include "main.h"
#include <stdio.h>

/**
 * _islower: checks alphabetic character
 * @c: the character that is being checked
 * Return: 1 if c is lowercase, otherwise 0
*/
int _islower(int c)
{
if ((c >= 'a') || (c <= 'z'))
{
return 1;
}
else
{
return 0;
}
}