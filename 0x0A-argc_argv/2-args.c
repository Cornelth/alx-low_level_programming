#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: Count arguments
 * @argv: String Arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{

int sum = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (sum < argc)
{
printf("%s\n", argv[sum]);
sum++;
}
}
return (0);
}
