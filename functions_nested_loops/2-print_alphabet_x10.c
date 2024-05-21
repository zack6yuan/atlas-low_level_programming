#include "main.h"
#include <stdio.h>

/**
 * print_alphabetx10 - prints the alphabet ten times
 @c: the character that is being checked
*/

void print_alphabetx10(void);
{
    char c;
    int x = 0; 

    for (x = 0; x < 10; x++) /*the loop iterates ten times*/
    {
        for (c = 'a'; c <= 'z'; c++) /*a through z*/
        {
            _putchar(c);
        }
        _putchar('\n');
    }
}
