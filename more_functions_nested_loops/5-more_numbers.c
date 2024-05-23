#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, ten times
 * Return: void
*/

void more_numbers(void)
{
int a;
int b;
for (a = 0; a <= 14; a++) /*prints 0 to 14*/
{
    for (b = 0; b <= 10; b++) /*nested loop iterates 10 times*/
_putchar(a + '0');  
}
_putchar('\n');   
}
