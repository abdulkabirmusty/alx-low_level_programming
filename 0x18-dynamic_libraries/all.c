#include "main.h"

/**
 * add - Add two integers
 * @a: first number
 * @c: seconf number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int c)
{
	return (a + c);
}

/**
 * div - divide two integers
 * @a: First Num
 * @c: Second num
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int div(int a, int c)
{
	return (a / c);
}

/**
 * mod - mod of two integers
 * @a: First Num
 * @c: Second num
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mod(int a, int c)
{
	return (a % c);
}

/**
 * mul - multiple of two integers
 * @a: First Num
 * @c: Second num
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int c)
{
	return (a * c);
}

/**
 * sub - subtraction of two integers
 * @a: First Num
 * @c: Second num
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sub(int a, int c)
{
	return (a - c);
}
