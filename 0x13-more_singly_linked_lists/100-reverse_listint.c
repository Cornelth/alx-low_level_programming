#include "lists.h"

/**
 * reverse_listint - A fn that Reverses a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *last = NULL;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = front;
	}

	(*head)->next = last;

	return (*head);
}
