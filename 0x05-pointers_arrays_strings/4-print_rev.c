#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 *
 * @s: char parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int n = strlen(s);

int i;
for (i = 0; i < n / 2; i++)
{
char ch = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = ch;
printf("%s", s[n - i - 1]);
print("\n");
}
}
