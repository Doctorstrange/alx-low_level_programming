#include "main.h"
/**
* reverse_array -  reverse the content of array
* @a: first compare
* @n: second compare
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int x;
int y;

for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
