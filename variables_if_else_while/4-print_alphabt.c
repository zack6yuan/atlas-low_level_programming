#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * except for q and e
 * Return: 0
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q') /* != means not equal to */
putchar (c);
}

putchar('\n');

return (0);
}
