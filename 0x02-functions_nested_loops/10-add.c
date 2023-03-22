#include "main.h"

/**
 * add - adds two integers and prints the result of the sum
 *
 */

int add(int a, int b)
{
	int s;
	s = a + b;
	_putchar((s / 10) + '0');
	_putchar((s % 10) + '0');
	_putchar('\n');
}
