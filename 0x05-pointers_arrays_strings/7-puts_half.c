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
i = 0;
while (i <= num - 1)
{
if (i % 2 != 0)
{
_putchar(str[i]);
}
else
{
continue;
}
i++;
}
_putchar('\n');
}
