#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isNum -chekcs if a string array is num
 * @num: string
 * Return: 1 if the string is num, 0 otherwise
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
		if (!isdigit(num[i]))
			return (0);
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: agrument count
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 1)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
