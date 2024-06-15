#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string 
 * @s2: the second string
 * Return: s1 followed by s1, and empty string if NULL
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int x;
int y;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
}