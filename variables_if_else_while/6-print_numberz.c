#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int base;
for (base = 0; base < 10; base++)
{
putchar (base);
}
putchar('\n');

return (0);
}