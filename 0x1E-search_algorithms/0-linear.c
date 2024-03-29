#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element
 * @size:  number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%li] = [%i]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
	}
	return (-1);
}
