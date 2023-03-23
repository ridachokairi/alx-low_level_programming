#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d ", i);
		else if (i % 3 == 0)
			if (i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		else
			printf("Buzz ");
	}
}
