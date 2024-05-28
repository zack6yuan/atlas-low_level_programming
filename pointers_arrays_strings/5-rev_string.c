#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string and prints it
 * @s: the string's pointer
 * Return: 0
 */

void rev_string(char *s)
{
char c;
int x;
int digits = 0;

for (digits = 0; s[digits] != '\0'; digits++) /*finds the length of the string, until reaches null*/
{
for (x = 0; x < digits; x++) /*half of the string*/
while (digits--) 
c = s[x]; /*stores int x in char c*/
s[x] = s[digits]; /*stores int digits in int and swaps*/
s[digits] = c; /*finishes the switch*/
}
}
