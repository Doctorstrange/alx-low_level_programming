#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to print
 * @f: pointer to the function that would print the name
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
