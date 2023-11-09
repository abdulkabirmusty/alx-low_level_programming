#include "lists.h"

/**
 * print_dlistint - This prints all the elements of a doubly linked list
 * @h: This is head node
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *dummy = h;
	unsigned long int len = 0;

	while (dummy)
	{
		printf("%d\n", dummy->n);
		dummy = dummy->next;
		len++;
	}

	return (len);
}
