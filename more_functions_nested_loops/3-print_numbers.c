#include <stdio.h>

/**
* print_numbers - prints numbers 0 to 9, followed by a new line
* @n: initial number used
* Return: 0
*/

void print_numbers(void)
{
    int n;
    for (n = 0; n <= 9; n++)
    {
    putchar(n + '0');/*converts int to char to use _putchar*/
    }
    putchar('\n');
}