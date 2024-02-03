#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @c: Input string to be encoded
 * Return: Encoded string
 */
char *leet(char *c)
{
    char *cp = c;
    char key[] = {'A', 'E', 'O', 'T', 'L'};
    int value[] = {4, 3, 0, 7, 1};
    unsigned int i;

    while (*c)
    {
        for (i = 0; i < sizeof(key) / sizeof(char); i++)
        {
            /* 32 is the difference between lowercase and uppercase letters */
            if (*c == key[i] || *c == key[i] + 32)
            {
                *c = '0' + value[i];
            }
        }
        c++;
    }

    return (cp);
}
