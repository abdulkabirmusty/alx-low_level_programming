#include "lists.h"

/**
 * free_dlistint - This frees a doubly linked list
 * @head: This is the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *dummy = head;

	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(dummy);
			dummy = head;
		}
	}
	free(dummy);
}
