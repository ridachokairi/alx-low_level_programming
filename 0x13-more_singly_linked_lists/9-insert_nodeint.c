#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a singly linked list
 * @idx: index where to add the node
 * @n: node's data
 * Return: NULL or address of the added node
 */

listint_t *inset_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head, *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	while (node)
	{
		node = node->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	i = 0;
	node = *head;

	while (node && i <= idx)
		{
			node = node->next;
			new_node = node->next;
			node = new_node;
			i++;
		}
	return (new_node);
}
