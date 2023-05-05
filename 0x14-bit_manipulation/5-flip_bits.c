#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: one number
 * @m: another number
 * Return: the fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int (flip) = 0;
unsigned long int oneone = n ^ m;
while (oneone != 0)
{
if ((oneone & 1) == 1)
{
(flip)++;
}
oneone >>= 1;
}
return (flip);
}
