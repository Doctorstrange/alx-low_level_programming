#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - print all elements on the list
 *@head: head pointer
 *@n: value in the list
 *Return: number of nodes in list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temphead;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	temphead = *head;

	if (temphead != NULL)
	{
	while (temphead->next != NULL)
	{
		temphead = temphead->next;
	}
	new_node->next = NULL;
	new_node->prev = temphead;
	new_node->n = n;
	temphead->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = temphead;

	return (new_node);
}
