#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: int to add to
 * @b: int to add
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
return (a + b);
}


/**
 * op_sub - subtract two integers
 * @a: int to subtract from
 * @b: int to substract
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: int to multiply
 * @b: int to multiply by
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two integers
 * @a: int to divide
 * @b: int to divide by
 * Return: the result of the division
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - find the remainder of a division
 * @a: int to divide
 * @b: int to divide by
 * Return: remainder of a division
 */
int op_mod(int a, int b)
{
return (a % b);
}
