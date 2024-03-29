#include "lists.h"

/**
 * print_listint_safe - a function that  prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)

{
	size_t num = 0;
	long int difference;

	while (head != NULL)
	{
		difference = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
