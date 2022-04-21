#include <string.h>
#include "main.h"
/**
 * puts_half - print even
 * @str: char parameter
 * Return: Nothing
 */

void puts_half(char *str)
{
int i;
int num;
num = strlen(str);
if (num % 2 != 0)
{
i = (strlen(str) - 1) / 2;
}
else
{
i = strlen(str) / 2;
}
while (i <= num - 1)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
