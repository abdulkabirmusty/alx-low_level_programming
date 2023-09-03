#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * return -1 if error is encountered.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
