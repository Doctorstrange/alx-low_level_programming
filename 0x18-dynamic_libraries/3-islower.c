#include "main.h"
/**
* _islower - return 0 capital and small 1
* Return: Always 0 (Success)
* @c: checked character
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
