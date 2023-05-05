#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: nothing
 */

int get_endianness(void)
{
unsigned int x = 1;
char *y = (char*)&x;
return (*y ? 1 : 0);
}
