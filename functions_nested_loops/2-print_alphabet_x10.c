#include "main.h"
#include <stdio.h>

/**
 * print_alphabetx10: prints the alphabet ten times
*/

void print_alphabetx10(void)
{
    char c;
    int x = 0; 

    while (x <= 9)
    {
    for (c = 'a'; c <= 'z'; c++)
    {
    _putchar(c);
    }
    _putchar('\n');
    x++;
    }
}
