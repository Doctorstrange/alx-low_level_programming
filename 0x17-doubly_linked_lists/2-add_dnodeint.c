#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - print all elements on the list
 *@head: head pointer
 *@n: interger to be added
 *Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temphead;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	temphead = *head;

	new->prev = NULL;
	new->n = n;
	new->next = temphead;
	*head = new;

	return (new);

}
