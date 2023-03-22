#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number of a given number n to 98 
 * in order
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for ( i == n ; i <= 98 ; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i + '0');
		}
	} else if (n > 98)
	{
		for (i == n ; i >= 98 ; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i + '0');
		}
	} else
		_putchar('98');
}
