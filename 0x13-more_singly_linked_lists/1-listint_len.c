#include "lists.h"

/**
 * listint_len - returns the number of elements of a singly linked list
 * @h: a singly linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
