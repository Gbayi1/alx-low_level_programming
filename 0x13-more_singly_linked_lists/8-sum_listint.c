#include "lists.h"

/**
 * sum_listint - Sums all data of the list 
 * Return: Sum of all data (n) of a linked list
 * 0 if empty list
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
