#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: pointer to listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
