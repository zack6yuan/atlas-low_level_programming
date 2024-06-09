#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 */
int main(int argc, char *argv[])
{
int num1 = 0, num2 = 0;

if (argc != 3) /*because program name is included*/
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]); /*atoi (string to integer)*/
num2 = atoi(argv[2]); /*stored in num1 and num2*/
printf("%d\n", num1 * num2); /*multiplication*/
}
return (0);
}
