#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - print all elements on the list
 *@h: head pointer
 *Return: number of elements nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
