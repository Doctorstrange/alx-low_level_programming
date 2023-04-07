#include "main.h"
/**
 * is_prime_number - detect the prime
 * @n: number to raise
 * @i: number to divide with
 * Return: returns zero
 * is_divisible - number that can divide the suspect
 */
int is_divisible(int n, int i)
{
if (i == 1)
{
return (0);
}
if (n % i == 0)
{
return (1);
}
return (is_divisible(n, i - 1));
}

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (!is_divisible(n, n - 1));
}
