#include "main.h"
/**
* *_strcpy -  copies the string pointed to by src
* @dest: to copy to
* @src: ponter to copy from
* Return: nothing
*/
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x++] = '\0';
return (dest);
}
