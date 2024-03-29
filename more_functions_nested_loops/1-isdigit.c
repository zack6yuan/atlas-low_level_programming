#include "main.h"

/**
 * _isdigit - Check if the character is a digit
 * @c: the character to be checked
 * Return: 1 for a character that is a digit, 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
