#include "lists.h"

/**
 * free_listint_safe - Prints a linked
 * Return: Size of the list that was free'd
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
