#include "main.h"
/**
* _isalpha - return 0 capital and small 1
* Return: Always 0 (Success)
* @c: checked character
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
