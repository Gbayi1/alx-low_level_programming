#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to address of a list
 * @idx: Index of the list where new node should be added
 * @n: Integer
 *
 * Return: Address of the new node
 * Null if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = *head;
	listint_t *resume;

	if (!tmp)
		return (-1);
	while (*head && index)
	{
		if (!tmp)
			return (-1);
		if (j == index - 1)
			break;
		tmp = tmp->next;
		++j;
	}
	if (index)
	{
		resume = tmp->next->next;
		free(tmp->next);
		tmp->next = resume;
	}
	else
	{
		*head = (*head)->next;
		free(tmp);
	}
	return (1);
}
