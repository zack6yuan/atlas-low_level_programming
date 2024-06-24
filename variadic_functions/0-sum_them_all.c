#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list digits;
int sum = 0; /*variable to store sum*/
unsigned int x; /*loop counter*/

if (n == 0) /*parameter*/
{
return (0);
}
va_start(digits, n);

for (x = 0; x < n; x++)
{
sum += va_arg(digits, int);
}
va_end(digits);
return (sum); /*returns sum*/
}
