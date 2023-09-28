#include "main.h"

/**
 * get_endianness - This check if a machine is little or big endian
 * Return: returns 0 for big, otherwise returns 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
