#include <stdio.h>
/**
* main - print all number 0-9
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i <= 56)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
