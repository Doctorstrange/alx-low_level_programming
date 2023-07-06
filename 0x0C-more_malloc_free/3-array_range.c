#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: start int point
 * @max: end int point
 * Return: nothing or pointer
 */
int *array_range(int min, int max)
{
int *inta;
int x, total;

if (min > max)
return (NULL);

total = max - min + 1;

inta = malloc(sizeof(int) * total);

if (inta == NULL)
return (NULL);

for (x = 0; min <= max; x++)
inta[x] = min++;

return (inta);
}
