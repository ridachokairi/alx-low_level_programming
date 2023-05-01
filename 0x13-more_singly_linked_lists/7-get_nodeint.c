#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a singly linked list
 * @head: head of a singly linked list
 * @index: index of the node
 * Return: the address of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
