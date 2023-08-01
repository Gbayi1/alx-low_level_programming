#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * Return: Address of the new node
 * Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	while (*head && idx)
	{
		if (!tmp)
			return (NULL);
		if (j == idx - 1)
			break;
		tmp = tmp->next;
		++j;
	}
	new->n = n;
	if (idx)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = tmp;
		*head = new;
	}
	return (new);
}