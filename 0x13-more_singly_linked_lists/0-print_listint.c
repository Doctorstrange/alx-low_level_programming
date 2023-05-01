#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: pointer to the first node in the list
 * Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *in = h;

while (in != NULL)
{
printf("%d\n", in->n);
in = in->next;
count++;
}
return (count);
}
