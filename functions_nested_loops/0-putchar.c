#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by a new line
 * Return: 0
*/
int main() {
    char *str = "_putchar";
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]);
    }
    return 0;
}