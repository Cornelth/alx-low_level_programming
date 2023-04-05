#include "lists.h"

/**
 * find_listint_loop - a fn that finds a loop in a linked list
 * @head: a pointer to the head of linked list to search for
 *
 * Return: address of the node where the loop starts, otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	if (!head)
		return (NULL);

	while (one && two && two->next)
	{
		two = two->next->next;
		one = one->next;
		if (two == one)
		{
		one = head;
		while (one != two)
		{
			one = one->next;
			two = two->next;
		}
		return (two);
		}
	}
	return (NULL);
}
