#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - print all elements on the list
 *@head: head pointer
 *@:index: position of the node
 *Return: the index value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t place = 0;

	while (place < index && head != NULL)
	{
		if (head->next == NULL || head == NULL)
			return (NULL);
		head = head->next;
		place++;
	}

	return (head);
}
