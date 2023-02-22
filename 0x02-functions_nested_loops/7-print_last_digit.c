#include "main.h"
/**
 *print_last_digit - To print last digit of n
 *@num: digit to work on
 *
 *
 *Return: zero
 */
int print_last_digit(int num)
{
int last_digit;

	if (num < 0)
	{
		last_digit = (-1 * (num % 10));
		_putchar ("0" + last_digit);
		return (last_digit);
	}

	else
	{
		last_digit = (num % 10);
		_putchar ("0" + last_digit);
		return (last_digit);
	}
}
