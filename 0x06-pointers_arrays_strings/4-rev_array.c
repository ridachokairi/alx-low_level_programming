#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int b;
	int i ;

	if (n % 2 == 0)
	{
		for (i = 0 , i < (n - 1) / 2, i++)
		{
			b = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = b;
		}
	}
	else
	{
		for (i = 0 , i < n / 2 , i++)
		{
			b = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = b;
		}
	}
}
