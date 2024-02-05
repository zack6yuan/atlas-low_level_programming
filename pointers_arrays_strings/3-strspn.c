#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Input string
 * @accept: Characters to match in the prefix
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value;

    if (!s || !accept)
        return 0; // Handle null pointers

    value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                value++;
                break; // Exit the inner loop once a match is found
            }
        }

        if (accept[n] == '\0')
        {
            // No match was found, exit the outer loop
            break;
        }
    }

    return value;
}
