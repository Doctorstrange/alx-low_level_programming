#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: variable for memory to be allocated to
 * Return: nothing or pointer
 */
void *malloc_checked(unsigned int b)
{
void *a = malloc(sizeof(b));
if (a == NULL)
{
exit(98);
}
return (a);
}
