#include "lists.h"

/**
 * insert_nodeint_at_index - a fn that inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node. Otherwise  NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (!temp || !temp->next)
			return (NULL);

		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
