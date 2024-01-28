#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @x: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for anything elsae
 */

int _isdigit(int x)

{

	if (x >= 40 && x<= 57)
	{
	return (1);
	}
	return (0);
}
