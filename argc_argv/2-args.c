#include <stdio.h>
/**
 * main - prints all received arguments
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++) /*for loop for arguments*/
{
printf("%s\n", argv[x]); /*prints received arguments*/
}
return (0);
}
