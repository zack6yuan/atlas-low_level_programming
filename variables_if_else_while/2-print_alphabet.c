#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, 
 * followed by a new line
 * in the for loop, c is initialized as a, 
 * and moves on to the next letter using c++
 * as it reaches z, the for loop stops
 * Return: Always 0
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++) /*for loop*/
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
