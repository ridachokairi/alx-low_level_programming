#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 * @head: head of a singly linked list
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
