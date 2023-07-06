#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the first node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *in;

while (*head != NULL || head == NULL)
{
in = *head;
*head = (*head)->next;
free(in);
}

*head = (NULL);
}
