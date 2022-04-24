/**
 * *cap_string - capitalise string
 * @s: char parameter
 * Return: capitalice letter
 */

char *cap_string(char *s)
{
int i;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
if ((s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
continue;
}
}
if (s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
++i;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
else
{
if (s[i] >= 'A' && s[i]<= 'Z')
{
s[i] = s[i] + 32;
}
}
}
return (s);
}
