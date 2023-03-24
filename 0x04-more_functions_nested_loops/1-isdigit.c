#include "main.h"
/**
 * __isdigit - checks for a digit 0 - 9
 * @x: number being checked
 * Return 1 if digit 0 if not
 * '_isdigit' return value 0 or 1
 */

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
