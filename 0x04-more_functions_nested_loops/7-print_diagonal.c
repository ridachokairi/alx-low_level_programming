#include "main.h"

/**
 * print_line - prints a diagonal line using \ more times
 *@n : the number of \ used
 *
 */

void print_line(int n)
{
        int i,j;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j < i)
					_putchar(' ');
				else if (j == i)
					_putchar(92);
			}
			_putchar('\n');
		}
	}
}
