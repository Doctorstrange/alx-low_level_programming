#include <stdlib.h>
#include "lists.h"
/**
 * function that adds a new node at the end of a listint_t list
 * @n: int value in the member
 * @head: double pointer to a header
 * Return: number of nodes in the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node, *current;

new_node = malloc(sizeof(listint_t));
if (end_node == NULL)
return (NULL);

end_node->n = n;
end_node->next = NULL;

if (*head == NULL)
{
*head = end_node;
return (end_node);
}

current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = end_node;

return (end_node);
}
