#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: A pointer to the address of the head of the list.
 * @index: The index of the node to be deleted
 * Return: 1 for  success,  -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int node_count;

	if (current == NULL) /* I can use head here too, and even * b4 either */
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (node_count = 0; node_count < (index - 1); node_count++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
