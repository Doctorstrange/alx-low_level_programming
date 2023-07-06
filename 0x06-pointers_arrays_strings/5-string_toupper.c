#include "main.h"
/**
* *string_toupper -  reverse the content of array
* @y: first compare
* Return: nothing
*/
char *string_toupper(char *y)
{
int x;

x = 0;
while (y[x] != '\0')
{
if (y[x] >= 'a' && y[x] <= 'z')
{
y[x] = y[x] - 32;
}
x++;
}
return (y);
}
