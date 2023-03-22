#include "main.h"
/**
* main - print all number 0-9
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char spell[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
_putchar(spell[i]);
}
_putchar('\n');
return (0);
}
