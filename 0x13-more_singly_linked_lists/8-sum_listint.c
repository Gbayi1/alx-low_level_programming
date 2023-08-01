#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a struct
 *
 * Return: Head node's data (n)
 * 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
