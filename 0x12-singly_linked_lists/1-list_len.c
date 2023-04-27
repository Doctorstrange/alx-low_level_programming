#include <stddef.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer to the firt node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
size_t len = 0;
const list_t *node = h;
while (node != NULL)
{
len++;
node = node->next;
}
return (len);
}
