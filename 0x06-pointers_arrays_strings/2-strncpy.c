#include "main.h"
/**
* *_strncpy -  concatenates two strings
* @dest: to copy to
* @src: ponter to copy from
* @n: print limit
* Return: nothing
*/
char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;
while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}

return (dest);

}
