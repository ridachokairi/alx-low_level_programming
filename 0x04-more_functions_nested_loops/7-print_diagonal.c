#include "main.h"

/**
 * print_line - prints a diagonal line using \ more times
 *@n : the number of \ used
 *
 */

void print_line(int n)
{
        int i,j = 1;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (i = 1; i <= n; i++)
		{
			if (j == i)
			{
				_putchar('\');
				j++;
			}
			_putchar('\n');
		}
	}
}
