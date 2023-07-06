#include "main.h"
/**
* print_alphabet - declared entry point function returning 0
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;
char spell[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
_putchar(spell[i]);
}
_putchar('\n');
}
