#include <main.h>
/**
* main - print all number 0-9
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char spell[8] = "_putchar";
for (i = 0; i < 8; i++)
{
putchar(spell[i]);
}
putchar('\n');
return (0);
}
