#include "main.h"

/**
 * times_table - prints the 9 times tables
 *
 */

void times_table(void)
{
	int i;
	int j;
	int r;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			r = i * j;
			_putchar(r + ',');
		}
		_putchar('\n');
	}
}
