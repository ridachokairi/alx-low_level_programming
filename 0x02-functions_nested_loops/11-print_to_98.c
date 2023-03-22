#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number of a given number n to 98 
 * in order
 *@n:integer
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; n < 98; ++i)
			printf("%d, ", i);
	printf("98\n");
}
