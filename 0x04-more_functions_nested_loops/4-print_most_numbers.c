#include "main.h"
/**
 * print_numbers - print number from 0-9
 * Return number 0-9 excluding 2,4
 */

void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
}
_putchar('\n');
}
