#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in a list.
 * @h: param list
 * element- a counter var for elements for size_t (nodes)
 * Return: the number of element in h
 */

size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		element++;
	}
	return (element);
}
