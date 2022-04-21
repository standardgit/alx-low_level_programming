#include <string.h>
#include <stdio.h>
/**
 * print_rev - reverse a string
 *
 * @s: char parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
char str;

str = strrev(s);
puts(str);
}
