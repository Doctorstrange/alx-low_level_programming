#include "main.h"
/**
 * print_numbers - print number from 0-14
 * Return number 0-14 ten times
 */

void print_numbers(void)
{
int x;
int y;
for (x = 0; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}