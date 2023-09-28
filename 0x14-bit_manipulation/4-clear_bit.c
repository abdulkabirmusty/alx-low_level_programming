#include "main.h"

/**
 * clear_bit - this set value of a given bit to 0
 * @n: pointer to the number to be change
 * @index: This is index of the bit to clear
 *
 * Return: return 1 for success, otherwise return -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
