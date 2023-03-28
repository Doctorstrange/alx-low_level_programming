#include "main.h"
/**
* rev_string -   reverses a string
* @s: the string to be printed
*
* Return: nothing
*/
void rev_string(char *s)
{
int x = 0;
int y = 0;
char temp;

while (s[x++])
{
y++;
}

for (x = y - 1; x >= y / 2; index--)
{
temp = s[x];
s[x] = s[y - x - 1];
s[y - x - 1] = temp;
}
}
