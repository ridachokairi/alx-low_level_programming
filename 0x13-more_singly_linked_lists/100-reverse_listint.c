#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: address of the head node
 * Return: a pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *node_temp = NULL;

	if (!head && !*head)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node)
	{
		node_temp = node->next;
		node->next = *head;
		*head = node;
		node = node_temp;
	}
	return (*head);
}
