#include "lists.h"

/**
 * listint_len - prints how many contained elements
 * @h: the pointer
 *
 * Return: num of contained elements
 */

size_t listint_len(const listint_t *h)
{
	size_t my_num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		my_num_of_nodes++;
	}

	return (my_num_of_nodes);
}
