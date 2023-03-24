#include <stdio.h>

/**
* main - causes an infinite loop
* Prints a message indicating an infinite
* Return: 0
*/
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
i = 0;
/**
*The following while loop caused an infinite loop
*while (i < 10)
*{
*putchar(i);
*}
*/
printf("Infinite loop avoided");

return (0);
}
