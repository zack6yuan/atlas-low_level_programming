#include <stdio.h>

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: 0
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return(0);
}
