#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *rot13 - rot
 * @s: more
 * Return: char
 */

char *rot13(char *s)
{
char n;
n = 'a';
for (n = 'a'; n <= 'z'; n++)
{
if (s[n] == n)
{
s[n] = n + 13;
}
}
}
