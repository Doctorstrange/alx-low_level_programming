#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of strings of s2 to be copied
 * Return: nothing or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y = 0;
char *t;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= strlen(s2))
{
t = malloc((strlen(s1)) + (strlen(s2) - 1));
}
else
{
t = malloc(strlen(s1) + n);
}
if (t == NULL)
{
return (NULL);
}
for (x = 0; x < strlen(s1); x++)
{
t[x] = s1[x];
}
for (y = 0; y < n && s2[y] != '\0'; y++)
{
t[x] = s2[y];
x++;
}
t[x] = '\0';
return (t);
}
