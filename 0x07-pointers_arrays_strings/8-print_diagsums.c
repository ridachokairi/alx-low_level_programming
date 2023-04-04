#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: square matrix of integers
 * @size: the size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i <= size - 1; i++)
	{
		for (j = 0; j <= size - 1; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
				sum2 += a[i][size - 1 - j];
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
