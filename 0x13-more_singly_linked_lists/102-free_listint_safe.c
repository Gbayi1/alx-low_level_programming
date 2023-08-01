#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to address of a list
 *
 * Return: Pointer to first node of reversed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		++a;
	}
	if (*h)
	{
		free(*h);
		++a;
	}
	*h = NULL;
	return (a);
}
