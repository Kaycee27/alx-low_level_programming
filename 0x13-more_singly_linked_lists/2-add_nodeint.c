#include "lists.h"

/**
 * add_nodeint - the function
 * @n: node
 * @head: pointer
 * Return: NULL or otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	pointer = malloc(sizeof(listint_t));
	if (!pointer)
	{
		return (NULL);
	}
	pointer->n = n;
	pointer->next = *head;
	*head = pointer;

	return (pointer);
}
