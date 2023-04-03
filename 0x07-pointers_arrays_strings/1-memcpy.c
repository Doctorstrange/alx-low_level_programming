#include "main.h"
/**
* *_memcpy - fills a memory block with the value of b
* @n: the number of bytes to be copied
* @src: memory area to be copied
* @dest: location to copy memory area to
* Return: always zero
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;

}
return (dest);


}
