#include "lists.h"

/**
 * sum_dlistint - This sums all the data in a linked list
 * @head: head node
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i;

	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
