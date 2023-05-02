#include <stddef.h>
#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked
 * @h: pointer to the first node in the list
 * Return: number of elementsç in the list
*/
size_t listint_len(const listint_t *h)
{
size_t elnum = 0;
const listint_t *in = h;

while (in != NULL)
{
elnum++;
in = in->next;
}

return (elnum);
}
