#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, ten times
 * Return: void
*/

void more_numbers(void)
{
int a;
int b = 0; /*reset b to 0*/
for (a = 0; a < 10; a++)/*outer loop controls inner loop*/
{
for (b = 0; b <= 14; b++) /*0 to 14*/
_putchar(b / 10 + '0'); /*tens digit*/
_putchar(b % 10 + '0'); /*ones digit*/
}
_putchar('\n');
}
