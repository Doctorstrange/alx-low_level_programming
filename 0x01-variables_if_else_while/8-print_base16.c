#include <stdio.h>
/**
* main - print all number 0-9
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 48; i < 103; i++)
{
if ((i >= 48 && i <= 57) || (i >= 97 && i <= 102))
{
putchar(i);
}
}
putchar('\n');
return (0);
}
