#include "main.h"

/**
 * leet - Encode into 1337speak
 * @n: Input string to be encoded
 * Return: Pointer to the modified string
 */
char *leet(char *n)
{
    int i, j;
    char s1[] = "aAeEoOtTlL";
    char s2[] = "4433007711";

    for (i = 0; n[i] != '\0'; i++)
    {
        for (j = 0; s1[j] != '\0'; j++)
        {
            if (n[i] == s1[j])
            {
                n[i] = s2[j];
                break;  // Exit the inner loop once a replacement is made
            }
        }
    }

    return (n);
}
