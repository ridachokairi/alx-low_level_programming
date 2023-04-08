#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (!atoi(argv[1]))
			printf("0\n");
		else
		{
			while (atoi(argv[1]) > 0)
			{
				if (atoi(argv[1]) / 25 > 0)
				{
					cent++;
					atoi(argv[1]) = atoi(argv[1]) - 25;
				}
				else if (atoi(argv[1]) / 10 > 0)
				{
					cent++;
					atoi(argv[1]) = atoi(argv[1]) - 10;
				}
				else if (atoi(argv[1]) / 5 > 0)
				{
					cent++;
					atoi(argv[1]) = atoi(argv[1]) - 5;
				}
				else if (atoi(argv[1]) / 2 > 0)
				{
					cent++;
					atoi(argv[1]) = atoi(argv[1]) - 2;
				}
				else if (atoi(argv[1]) == 1)
				{
					cent++;
					atoi(argv[1]) = 0;
				}
			}
			printf("%d\n", cent);
		}
	}
	return (0);
}

