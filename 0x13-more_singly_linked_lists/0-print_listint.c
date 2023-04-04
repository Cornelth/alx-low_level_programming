#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: a pointer to the next node in the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t list_node = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        list_node++;
        h = h->next;
    }

    return (list_node);
}
