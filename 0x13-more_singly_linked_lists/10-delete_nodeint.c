#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: double pointer to the head node
 * @index: position of node to delete
 * Return: success code
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *in, *tb;
unsigned int x = 0;

if (head == NULL)
return (-1);

if (index == 0)
{
tb = *head;
*head = (*head)->next;
free(tb);
return (1);
}

in = *head;
while (in != NULL && x < index - 1)
{
in = in->next;
x++;
}

if (in == NULL || in->next == NULL)
{
return (-1);
}

tb = in->next;
in->next = tb->next;
free(tb);
return (1);
}
