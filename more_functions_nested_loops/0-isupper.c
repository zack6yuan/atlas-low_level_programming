#include <stdio.h>

/**
* _isupper - checks for uppercase character
* c: initial parameter
* Return: 1 if uppercase, 0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)/*using ASCII values*/
return (1);
else
return (0);
}
