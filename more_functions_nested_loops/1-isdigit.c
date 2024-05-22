#include <stdio.h>

/**
* _isdigit - checks for a digit
* @c: the character we are checking using ASCII values
* Return: 1 if c is a digit, otherwise 0 
*/

int _isdigit(int c);
{
if (c >= 48 && c <= 57)/*using ASCII values*/
return (1);
else
return (0);
}