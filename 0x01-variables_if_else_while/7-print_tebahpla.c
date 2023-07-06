#include <stdio.h>
/**
* main - print all number 0-9
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char lletter[26] = "zyxwvutsrqponmlkjihgfedcba";
for (i = 0; i < 26; i++)
{
putchar(lletter[i]);
}
putchar('\n');
return (0);
}
