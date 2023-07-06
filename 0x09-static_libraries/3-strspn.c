#include "main.h"
/**
 * _strspn - finds the length of the initial segment of a string
 * which consists entirely of characters from another string.
 * @s: the string to check for the character
 * @accept: the character to be check for
 * Return: the number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y, length = 0;

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (accept[y] == s[x])
{
length++;
break;
}
}
if (accept[y] == '\0')
break;
}
return (length);
}
