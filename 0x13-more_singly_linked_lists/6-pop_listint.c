#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * Return: Head node's data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nums = 0;

	if (*head)
	{
		nums = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
		return (nums);
}
