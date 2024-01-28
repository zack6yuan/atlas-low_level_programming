#include "main.h"

/**
 * print_line - Draws a straight line according to the parameter
 * @n: The number of lines to draw
 *
 * Return: void
 */
void print_line(int n)
{
    int x;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (x = 0; x < n; x++)
        {
            _putchar(95); /* ASCII code for underscore character '_' */
        }
        _putchar('\n');
    }
}
