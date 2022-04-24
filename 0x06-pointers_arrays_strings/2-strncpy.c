#include <string.h>
/**
 * *_strncpy - copy string
 * @dest: char parameter
 * @src: char parameter
 * @n: int parameter
 * Return: char 
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
