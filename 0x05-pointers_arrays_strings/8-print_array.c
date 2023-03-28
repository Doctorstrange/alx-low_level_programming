#include "main.h"
#include <stdio.h>
/**
* print_array -  prints every other character of a string
* @a: the string to be printed
* @n: the string to be printed two
* Return: nothing
*/
void print_array(int *a, int n);
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
