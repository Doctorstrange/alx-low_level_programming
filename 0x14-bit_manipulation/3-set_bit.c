#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: is the index, starting from 0
 * @n: value to be processed
 * Return: zero or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

x = 1 << index;
*n |= x;

return (1);
}
