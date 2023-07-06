#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a char array an initializes with the value of c
 * @width: first dee
 * @height: second dee
 * Return: the pointer to the location of the new string
 */
int **alloc_grid(int width, int height)
{
int **twodee;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

twodee = malloc(sizeof(int *) * height);

if (twodee == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
twodee[x] = malloc(sizeof(int) * width);
if (twodee[x] == NULL)
{
for (; x >= 0; x--)
free(twodee[x]);

free(twodee);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
twodee[x][y] = 0;
}
return (twodee);
}
