#include <string.h>
/**
 * *_strncat - to concat two string
 * @dest: char parameter
 * @src: char parameter
 * @n: int parameter
 * Return: concated string
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
