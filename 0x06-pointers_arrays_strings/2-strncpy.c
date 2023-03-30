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
int y = 0;
x = 0;

while (y < n - 1 && src[x] != '\0')
{
dest[y] = src[x];
x++;
y++;
}
y++;
dest[y] = '\0';
return (dest);

}
