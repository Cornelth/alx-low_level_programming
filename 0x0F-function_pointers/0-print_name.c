#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * @f: this is the pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
