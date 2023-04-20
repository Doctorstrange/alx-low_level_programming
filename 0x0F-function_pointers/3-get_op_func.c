#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the function to run
 * @s: pointer to the operator provided
 * Return: pointer to the selected function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int x = 0;
while (*(ops[x].op) != *s && ops[x].op != NULL)
x++;
return (ops[x].f);
}
