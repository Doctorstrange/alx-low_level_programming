#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char lletter[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(lletter[i]);
}
putchar('\n');
return (0);
}
