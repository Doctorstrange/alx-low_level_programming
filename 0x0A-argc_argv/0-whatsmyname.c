#include <stdio.h>
#include "main.h"
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arrays in the arguments
 * __attribute__unused - gcc attribute to indicate unused variable
 * Return: always zero
 */

int main(int argc __attribute__(unused), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
