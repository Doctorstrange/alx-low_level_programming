#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - creates a char array an initializes with the value of c
 * @s1: first string
 * @s2: second string
 * Return: the pointer to the location of the new string
 */
char *str_concat(char *s1, char *s2)
{
char *newstr;
int x, y, z, t, a;
if (s1 == NULL)
{
s1 = '\0';
}
if (s2 == NULL)
{
s2 = '\0';
}
for (x = 0; s1[x] != '\0'; x++)
{
y++;
}
x = 0;
for (x = 0; s2[x] != '\0'; x++)
{
z++;
}
x = 0;
t = (y + z);
newstr = malloc(sizeof(char) * (t + 1));
if (newstr == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
{
newstr[x] = s1[x];
}
for (a = 0; s2[a] != '\0'; a++)
{
newstr[x] = s2[a];
x++;
}
return (newstr);
}
