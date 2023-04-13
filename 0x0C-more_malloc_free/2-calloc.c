#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: the size of each element
 * Return: nothing or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if ((nmemb || size) == 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == NULL)
{
return (NULL);
}
memset(p, 0, nmemb * size);
return (p);
}
