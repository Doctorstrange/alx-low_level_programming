#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head
 * @str: pointer to the string in the node
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str);
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = malloc(len + 1);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
strcpy(new_node->str, str);
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
