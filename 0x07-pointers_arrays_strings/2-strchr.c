#include <stdio.h>
#include "main.h"
/**
* *_strchr - finds the provide character in string
* @s: the string to check for the character
* @c: the character to be check for
* Return: always zero
*/
char *_strchr(char *s, char c)
{
int x;

for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return (NULL);
}
