#include "lists.h"

/**
 * free_listint -function free
 * @head: free blah
 */

void free_listint(listint_t *head)
{
	listint_t *ptr_mine;

	while (head)
	{
		ptr_mine = head->next;
		free(head);
		head = ptr_mine;
	}
}
