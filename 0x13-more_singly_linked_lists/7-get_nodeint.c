#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list
 * Return: nth node of a linked list
 * Null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		++j;
	}
	return (NULL);
}
