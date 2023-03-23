#include "main.h"
/**
* jack_bauer - return 0 capital and small 1
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
int a, b, c, d;
for (a = 48; a < 51; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 53; c++)
{
for (d = 48; d <= 57; d++)
{
if (!(a == 50 && b >= 52))
{
_putchar(a);
_putchar(b);
_putchar(58);
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
}
