#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - print all elements on the list
 *@head: head pointer
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
