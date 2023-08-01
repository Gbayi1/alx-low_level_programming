#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to address of a list
 *
 * Return: Pointer to first node of reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++c;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		++c;
	}
	return (c);
}
