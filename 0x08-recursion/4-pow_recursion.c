#include "main.h"
/**
 * _pow_recursion - the factorial funtion
 * @x: number to raise
 * @y: number to raise power
 * Return: returns zero
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y <= 1)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
