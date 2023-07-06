#include "main.h"
/**
 * is_divisible - checks if n is divisible by any number less than i
 * @n: number to raise
 * @i: number to divide with
 * Return: returns zero
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

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (!is_divisible(n, n - 1));
}
