#include "lists.h"

/**
 * add_nodeint_end - allows new end node
 * @head: pointer
 * @n: new node
 * Return: NULL or new node ptr
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *one_node;
	listint_t *ptr = *head;

	one_node = malloc(sizeof(listint_t));
	if (!one_node)
	{
		return (NULL);
	}

	one_node->n = n;
	one_node->next = NULL;

	if (*head == NULL)
	{
		*head = one_node;
		return (one_node);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = one_node;

	return (one_node);
}
