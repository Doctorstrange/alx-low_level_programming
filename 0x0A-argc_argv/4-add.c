#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* _checknum - function to check if its a digit
* @str: array str
* Return: Always 0 (Success)
*/
int _checknum(char *str)
{
unsigned int x;
x = 0;
while (x < strlen(str))
{
if (!isdigit(str[x]))
{
return (0);
}
x++;
}
return (1);
}

/**
 * main - Print the name of the program
 * _checknum - function to check if its a digit
* @argc: Count arguments
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int x;
int istr;
int sum = 0;
x = 1;
while (x < argc)
{
if (_checknum(argv[x]))
{
istr = atoi(argv[x]);
sum += istr;
}
else
{
printf("Error\n");
return (1);
}
x++;
}
printf("%d\n", sum);
return (0);
}
