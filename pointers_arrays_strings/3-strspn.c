#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Input string
 * @accept: Characters to match in the prefix
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value, check;

    value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        check = 0;

        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                value++;
                check = 1;
                break;  // Exit the inner loop once a match is found
            }
        }

        if (check == 0)
        {
            // Exit the outer loop if no match is found
            break;
        }
    }

    return value;
}
