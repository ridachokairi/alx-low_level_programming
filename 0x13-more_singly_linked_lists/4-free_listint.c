#include "lists.h"

/**
 * free_listint_t - frees a singly linked list
 * @head: head of a liked list
 */

void free_listint(listint_t *head)
{
	listint_t *node, *next_node;

	if (!head)
		return (NULL);

	node = head;

	while (node)
	{
		next_node = node->next;
		free(node->n);
		free(node);
		node = next_node;
	}
}
