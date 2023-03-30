#include <stdio.h>

/**
 * cornel - a print a string function that executed before main
 * Return: nothing
 */

void __attribute__((constructor)) cornel()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
