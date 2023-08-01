#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		++j;
	}
	return (j);
}
