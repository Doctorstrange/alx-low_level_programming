#include "main.h"
/**
* puts_half -  prints every other character of a string
* @str: the string to be printed
*
* Return: nothing
*/
void puts_half(char *str)
{
int x;
int y = 0;
int z;
while (str[y] != '\0')
{
y++;
}
z = y;
if ((y % 2) > 0)
{
y++;
}
y = y / 2;
for (x = y; x < z; x += 1)
{
_putchar(str[x]);
}
_putchar('\n');
}
