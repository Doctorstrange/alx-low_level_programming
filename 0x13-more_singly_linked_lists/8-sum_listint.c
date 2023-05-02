#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer to the head node
 * Return: the sum of all n in list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *in = head;

while (in != NULL)
{
sum += in->n;
in = in->next;
}
return (sum);
}
