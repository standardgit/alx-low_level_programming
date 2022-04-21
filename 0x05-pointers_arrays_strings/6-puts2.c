#include <string.h>
#include "main.h"
/**
 * puts2 - print odd strings
 *
 * @str: char parameter
 *
 * Return: Nothing
 */

void puts2(char *str)
{
int i;

i = 0;
while (i < strlen(str))
{
if ( i % 2 == 0)
{
_putchar(str[i]);
}
else
{
continue;
}
}
_putchar('\n');
}
