#include <string.h>
/**
 * *_stnrcat - to concat two string
 * @dest: char parameter
 * @src: char parameter
 * @n: int parameter
 * Return: concated string
 */

char *_strncat(char *dest, char *src, int n)
{
char s[1] = "\n";
char *srcs;
char *dests;
dests = strtok(dest, s);
srcs = strtok(strs, s);

strncat(dests, srcs, n);
return (dests);
}
