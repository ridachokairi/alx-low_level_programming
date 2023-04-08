#include <stdio.h>

/**
 * main - prints the number of arguments, followed by a new line
 * @argc: arguments count
 * @argv: array of strings
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	if(argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
