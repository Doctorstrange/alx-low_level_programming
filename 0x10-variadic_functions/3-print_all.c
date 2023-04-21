#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints numbers followed by a new line
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
char c;
int i;
float f;
char *s;

va_start(args, format);

while (*p != '\0')
{
switch (*p)
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
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}
p++;

if (*p != '\0' && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
{
if (*(p - 1) == 'c' || *(p - 1) == 'i' || *(p - 1) == 'f' || *(p - 1) == 's')
printf(", ");
}
}

va_end(args);

printf("\n");
}
