#include "main.h"
#include <stdio.h>

/**
* print_chessboard - prints the chessboard
* @a: the chessboard array
*/

void print_chessboard(char (*a)[8])
{
int x; /*for rows*/
int y; /*for columns*/

for (x = 0; x < 8; x++) /*loop for rows*/
{
for (y = 0; y < 8; y++) /*loop for columns*/
{
_putchar(a[x][y]); /*places in position*/
}
_putchar('\n');
}
}
