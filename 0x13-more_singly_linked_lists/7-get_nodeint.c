#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a struct
 *
 * Return: Head node's data (n)
 * 0 if linked list is empty
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
