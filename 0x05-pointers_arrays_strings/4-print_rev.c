#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: char parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - 1; i >= 0; i++)
{
printf("%s", s[i]);
}
printf("\n");
}
