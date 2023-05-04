#include "main.h"

/**
* print_binary -  fn that Prints the bin rep of a number.
* @n: The num to be printed in binary.
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
