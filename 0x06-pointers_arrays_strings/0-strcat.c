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
char *srcs;
char *dests;
dests = strtok(dest, s);
srcs = strtok(strs, s);

strcat(dests, srcs);
return (dests);
}
