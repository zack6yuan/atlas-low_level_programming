#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the numbers 1 to 100
* prints "Fizz" for multiples of 3
* prints "Buzz" for multiples of 5
* prints "FizzBuzz" for multiples of 3 and 5
* Return: 0
*/

int main(void)
{
int n;
for (n = 1; n <= 100; n++) /*prints 1 to 100*/
{
if (((n % 3) == 0) && ((n % 5) == 0)) /*condition 1*/
printf("FizzBuzz");
else if ((n % 3) == 0) /*condition 2*/
printf("Fizz");
else if ((n % 5) == 0) /*condition 3*/
printf("Buzz");
else /*condition 4*/
printf("%d", n);
if (n < 100)
printf(" "); /*for spacing*/
}
printf("\n");
return (0);
}
