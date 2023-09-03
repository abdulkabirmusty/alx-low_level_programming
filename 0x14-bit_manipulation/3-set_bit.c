#include "main.h"

/**
 * set_bit - sets bit at a given index to 1
 * @n: pointer to number to be change
 * @index: index of bit to set to 1
 *
 * Return: return 1 for success, otherwise return -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
