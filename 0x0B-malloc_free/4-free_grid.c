#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2d array
 * @grid: first dee
 * @height: second dee
 * Return: zero
 */
void free_grid(int **grid, int height);
{
int x;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
