#include "main.h"
/**
* *_memset - fills a memory block with the value of b
* @s: the variable whose value if to be filled
* @b: the value to be placed in the memory
* @n: the number of bytes to be filled
* Return: always zero
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

for (x = 0; x < n; x++)

s[x] = b;
return (s);

}
