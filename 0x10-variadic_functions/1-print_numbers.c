#include "variadic_functions.h"

/**
 * print_numbers - a fn that prints num
 * @separator: pointer param
 * @n: param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && count < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
