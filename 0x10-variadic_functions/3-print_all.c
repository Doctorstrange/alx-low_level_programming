#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
 va_list args;
char *str;
int i = 0;
char c;
float f;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = (float) va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str)
{
printf("%s", str);
break;
}
printf("(nil)");
break;
}
if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
{
printf(", ");
}
i++;
}
printf("\n");
va_end(args);
}
