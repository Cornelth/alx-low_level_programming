#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a lists
 * @h: a pointer of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t list_node = 0;

	while (h != NULL)
	{
		h = h->next;
		list_node++;
	}
	return (list_node);
}
