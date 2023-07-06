#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the head
 * @str: pointer to the string in the node
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}
return (new_node);
}
