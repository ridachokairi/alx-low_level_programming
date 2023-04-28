#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: a linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
		i++;
	}
	printf("-> %lu elements\n", i);
	return (i);
}
