#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - creates a char array an initializes with the value of c
 * @str: string to be copied
 * Return: the pointer to the location of the new string
 */
char *_strdup(char *str)
{
char *newstr;
int x = 0;
int y = 0;
if (str == NULL)
{
return (NULL);
}
for (x = 0; str[x] != '\0'; x++)
{
y++;
}
x = 0;
newstr = malloc(sizeof(char) * (y + 1));
if (newstr == NULL)
{
return (NULL);
}
for (x = 0; str[x] != '\0'; x++)
{
newstr[x] = str[x];
}
return (newstr);
}
