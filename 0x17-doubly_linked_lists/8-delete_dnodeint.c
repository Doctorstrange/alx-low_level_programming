#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - print all elements on the list
 *@head: head pointer
 *@index: position
 *Return: number of nodes in list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temphead;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	temphead = *head;

	if (index == 0)
	{
		*head = temphead->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temphead);
		return (1);
	}
	for (i = 0; temphead != NULL && i < index; i++)
		temphead = temphead->next;
	if (temphead == NULL)
		return (-1);
	if (temphead->prev != NULL)
		temphead->prev->next = temphead->next;
	if (temphead->next != NULL)
		temphead->next->prev = temphead->prev;
	free(temphead);
	return (1);

}
