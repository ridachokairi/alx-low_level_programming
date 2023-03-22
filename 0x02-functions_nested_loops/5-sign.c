#include "main.h"

/**
 * print_sign - returns 1 and prints + if a number is postive
 * returns 0 and prints 0 if a number is zero
 * return -1 and prints - if a number is negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
		_putchar('+');
	else if (n == 0)
		return (0);
		_putchar('0');
	else
		return (-1);
		_putchar('-');
}
