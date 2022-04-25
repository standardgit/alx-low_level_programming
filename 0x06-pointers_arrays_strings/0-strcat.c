#include <string.h>
/**
 * *_strcat - to concat two string
 * @dest: char parameter
 * @src: char parameter
 * Return: concated string
 */

char *_strcat(char *dest, char *src)
{
char s[1] = "\n";
char *dests;
dests = strtok(dest, s);

strcat(dests, src);
return (dests);
}
