#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to derive representation
 * Return: nothing
 */

void print_binary(unsigned long int n) {
    unsigned long int x, rep;

    rep = (unsigned long int)1 << (sizeof(unsigned long int) * 8 - 1);
    for (x = 0; x < sizeof(unsigned long int) * 8; x++) {
        if (n & rep) {
            printf("1");
        } else {
            printf("0");
        }
        rep >>= 1;
    }
}
