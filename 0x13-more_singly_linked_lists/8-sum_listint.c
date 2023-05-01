#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a singly linked list
 * @head: head of a singly linked list
 * Return: 0 or the sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int s = 0;

	if (!head)
		return (0);

	node = head;
	node->n = head->n;

	while (node)
	{
		s += node->n;
		node = node->next;
	}
	return (s);
}
