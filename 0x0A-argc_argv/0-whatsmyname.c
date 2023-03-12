#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its own name
 * @argc: Count arguments
 * @argv: Arguments string pointer
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}
