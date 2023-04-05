#include "lists.h"

/**
 * sum_listint - This computes the sum of all the data (n) in a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: the sum of all the data, OR 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;

	while (head != NULL)
	{
		sum_list = sum_list + head->n;
		head = head->next;
	}

	return (sum_list);
}

