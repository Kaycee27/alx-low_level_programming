#include "lists.h"

/**
 * free_listint2 - required func
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr_var;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr_var = (*head)->next;
		free(*head);
		*head = ptr_var;
	}

	*head = NULL;
}
