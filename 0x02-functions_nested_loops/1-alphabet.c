#include "main.h"
/**
 *print_alphabet - print all alphabets in a lowercase
 *
 *Return: nothing
 */
void print_alphabet(void)
{	char let;
	let = "a";
	do {
		_putchar(let);
	} while (let <= "z");
	_putchar("\n");
}

