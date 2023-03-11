#include "unistd.h"
/**
 * _putchar - function to print and write a character
 * @c: Character to print
 * Return: 1 for success, -1 for error
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
