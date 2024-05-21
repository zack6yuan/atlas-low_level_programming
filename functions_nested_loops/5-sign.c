#include <stdio.h>
#include "main.h"

/**
* print_sign - prints the sign of a number
* @c: the number that is being checked
* Return: 1 and + for > 0, 0 and 0 for = 0, and -1 and - for < 0
*/
int print_sign(int c)
{
    if (c > 0)
    {
    putchar('+')
    return (1);
    }
    else if (c == 0)
    {
    putchar('0')
    return (0);
    }
    else
    {
    putchar('-')
    return (-1);
    }
}