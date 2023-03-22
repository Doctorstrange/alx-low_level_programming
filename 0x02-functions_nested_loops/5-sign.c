#include "main.h"
/**
* print_sign - return 0 capital and small 1
* Return: Always 0 (Success)
* @n: checked character
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if
(n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
