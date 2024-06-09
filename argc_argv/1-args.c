#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*void for compiler*/
printf("%d\n", argc - 1); /*-1 for program name*/
return (0);
}
