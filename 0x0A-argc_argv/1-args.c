#include "main.h"
#include <stdio.h>

/**
 * print-number_arguments - prints the number of arguments
 * followed by a new line
 * @argc: arguments count
 * @argv: array of strings
 *
 */

void print_number_arguments(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d", i);
	_putchar('\n');
}
