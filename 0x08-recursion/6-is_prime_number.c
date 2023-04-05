#include "main.h"

/**
 * is_prime - checks the primarity of a number
 * @i: integer
 * @j: integer
 * Return: integer
 *
 */

int is_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	return (is_prime(i + 1, j));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: integer
 * Return: 1 if n is a prime number, 0 otherwise
 *
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (is_prime(2, n));
}
