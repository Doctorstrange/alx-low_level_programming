#include "main.h"
/**
* print_alphabet_x10 - entery point return 0
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int a;
int i;
for (a = 0; a < 10; a++)
{
char spell[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
_putchar(spell[i]);
}
_putchar('\n');
}
}
