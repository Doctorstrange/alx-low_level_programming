#include <stdio.h>
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arrays in the arguments
 * Return: always zero
 */

int main(int argc, char *argv[])
{
int x = 0;
int y = argc;
for (x = 0; x < y; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
