#include <stdio.h>

/**
 * main - prints the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int x;
for (x = 0; x < 16; x++)
{
putchar ('0' + x);
}
for (x = 'a'; x <= 'f'; x++);
{
putchar (x);
}
putchar('\n');

return (0);
}
