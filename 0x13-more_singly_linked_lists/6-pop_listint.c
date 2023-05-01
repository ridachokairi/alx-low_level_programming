#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly linked list,
 * and returns the head node data
 * @head: the head of a singly linked list
 * Return: 0 or the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *node, *next_node = *head;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	node = *head;
	node->n = (*head)->n;

	next_node = node->next;
	free(*head);
	*head = next_node;
	return (node->n);
}

