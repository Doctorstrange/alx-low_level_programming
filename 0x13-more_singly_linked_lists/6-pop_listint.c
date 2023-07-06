#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: double pointer to the head node
 * Return: the n data of head node
 */
int pop_listint(listint_t **head)
{
listint_t *tb;
int n;

if (*head == NULL)
return (0);

tb = *head;
n = tb->n;
*head = (*head)->next;
free(tb);
return (n);
}
