#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 */

int print_last_digit(int n)
{
	int m;
	m = n % 10;
	if (m >= 0)
	{
		_putchar('0' + m);
		return (m);
	} else
	{
		_putchar('0' - m);
		return (-m);
	}
}
