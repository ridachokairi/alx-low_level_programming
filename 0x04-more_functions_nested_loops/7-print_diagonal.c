#include "main.h"

/**
 * print_line - prints a diagonal line using \ more times
 *@n : the number of \ used
 *
 */

void print_line(int n)
{
        int i;

        if (n <= 0)
                _putchar('\n');
        else
        {
                for (i = 0; i < n; i++)
                        _putchar('\');
                _putchar('\n');
        }
}
