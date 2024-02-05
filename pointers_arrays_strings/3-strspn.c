#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string the be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which consist only of bytes from accept. 
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

		}

		s++;
	}

	return bytes;
}
