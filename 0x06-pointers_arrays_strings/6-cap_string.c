#include "main.h"
/**
 * *cap_string - reverse the content of array
 * @str: first compare
 * Return: nothing
 */
char *cap_string(char *str)
{
int let = 0;

while (str[let])
{
while (!(str[let] >= 'a' && str[let] <= 'z'))

if (str[let - 1] == ' ' ||
str[let - 1] == '\t' ||
str[let - 1] == '\n' ||
str[let - 1] == ',' ||
str[let - 1] == '.' ||
str[let - 1] == '!' ||
str[let - 1] == '?' ||
str[let - 1] == '"' ||
str[let - 1] == '(' ||
str[let - 1] == ')' ||
str[let - 1] == '{' ||
str[let - 1] == '}' ||
let == 0)
str[let] -= 32;
let++;
}
return (str);
}
