#include "lists.h"

/**
 * get_nodeint_at_index - A fn that finds a given node of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: the located node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int find_node;

	for (find_node = 0; find_node < index; find_node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
