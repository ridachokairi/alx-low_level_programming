#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimun value
 * @max: the maximum value
 * Return: pointer to the array or NULL
 */

int *array_range(unsigned int min, unsigned int max)
{
	int *a;
	unsigned int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

