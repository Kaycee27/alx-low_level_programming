#include "lists.h"

/**
 * print_listint - here is the reuired function
 * @h: h is my pointer
 * Return: how many nodes there will be after
 */

size_t print_listint(const listint_t *h)
{
	size_t how_many_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		how_many_nodes++;
		h = h->next;
	}

	return (how_many_nodes);
}
