#include "main.h"
/**
 * print_chessboard - print chess
 * @a: array length
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;
i = 0;
j = 0;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n")
}
}
