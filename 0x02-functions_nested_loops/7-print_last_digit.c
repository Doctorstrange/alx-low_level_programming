#include "main.h"
/**
* print_last_digit - return 0 capital and small 1
* Return: Always 0 (Success)
* @n: checked character
*/
int print_last_digit(int n)
{
int lnum;
lnum = n % 10;
if (lnum < 0)
{
_putchar(-lnum + 48);
return (-lnum);
}
else
{
_putchar(lnum + 48);
return (lnum);
}
}
