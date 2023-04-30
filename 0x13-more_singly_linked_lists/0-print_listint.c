#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a singly linked lists
 * @h: a singly linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
