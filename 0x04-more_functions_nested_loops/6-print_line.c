#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *@n: the length of the line
 * Return staright line
 */

void print_line(int n)
{
int x;

for (x = 0; x <= n; x++)
{
if (n <= 0)
{
_putchar('\n');
}
else
_putchar(95);
}
_putchar('\n');
}
