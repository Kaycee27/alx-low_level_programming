#include "lists.h"

/**
 * pop_listint - required function
 * @head: pointer
 * Return: 0 or initial contents
 */

int pop_listint(listint_t **head)
{
	int variable;
	listint_t *temp_val;

	if (*head == NULL)
	{
		return (0);
	}

	variable = (*head)->n;
	temp_val = (*head)->next;
	free(*head);
	*head = temp_val;

	return (variable);
}
