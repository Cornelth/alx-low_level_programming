#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argumnet in a program
 * @argc: Count arguments
 * @argv: String Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*this will Ignore the null arg or prig. name  argv*/
printf("%i\n", argc - 1);

return (0);
}
