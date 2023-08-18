#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - print all elements on the list
 *@head: head pointer
 *Return: number of nodes in list
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}
	return (add);
}
