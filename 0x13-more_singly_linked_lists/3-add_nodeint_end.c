#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a singly linked list
 * @head: pointer to the head of a singly linked list
 * @n: integer stored in the new node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end, *node = *head;

	if (node_end == NULL)
		return (NULL);

	node_end = malloc(sizeof(listint_t));
	node_end->n = n;

	if (node)
	{
		while (node->next)
		{
			node = node->next;
			node->next = node_end;
		}
	}
	else
		*head = node_end;
	return (node_end);
}
