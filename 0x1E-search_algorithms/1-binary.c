#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>


/**
 * binary_search - searches for a value in an integer array using a binary
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index containing value
 */

int binary_search(int *array, size_t size, int value)
{
	int lower, middle, upper;
	int count;

	if (array == NULL)
	{
		return (-1);
	}

	lower = 0;
	upper = size - 1;

	while (lower <= upper)
	{
		middle = (lower + upper) / 2;

		printf("Searching in array: ");
		for (count = lower; count <= upper; count++)
			printf("%i%s", array[count],
			       count == upper ? "\n" : ", ");

		if (array[middle] < value)
			lower = middle + 1;
		else if (array[middle] > value)
			upper = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
