#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name
 * @array: the array to be worked on by the called function
 * @size: sixe of the array
 * @action: pointer to the funtion taking array as an argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x = 0;
if (array == NULL || action == NULL)
return;

for (x = 0; x < size; x++)
{
action(array[x]);
}

}
