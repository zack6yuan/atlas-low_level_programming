#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, ten times

 * Return: void
*/

void more_numbers(void)
{
int a;
int b;
for (a = 0; a < 10; a++)/*outer loop controls inner loop*/
{
    for (b = 0; b <= 14; b++) /*prints 0 to 14*/
_putchar(a + '0');  
}
_putchar('\n');   
}
