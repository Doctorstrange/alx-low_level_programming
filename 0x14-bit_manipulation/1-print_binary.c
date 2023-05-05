#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to derive representation
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
unsigned long int x = 1;
unsigned int len = 0;
if (n == 0)
{
putchar('0');
}
else {
while ((n >> len) > 0)
len++;

while (len > 0)
{
len--;
if ((n & (x << len)) > 0)
putchar('1');
else
putchar('0');
}
}
}
