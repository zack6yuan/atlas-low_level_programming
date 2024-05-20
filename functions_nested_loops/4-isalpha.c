#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c - the character that is being checked
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
_isalpha(1);
else
return(0);
}