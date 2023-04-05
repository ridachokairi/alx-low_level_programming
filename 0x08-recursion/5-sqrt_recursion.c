#include "main.h"

/**
 * square_root - calculates the square root
 * @i: integer
 * @j: integer
 * Return: integer
 *
 */

int square_root(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (square_root(i + 1, j));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: the square root of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square_root(1, n));
}
