#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of string
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac ; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (arg = 0; arg < ac ; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			s[i++] = av[arg][byte];
		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
