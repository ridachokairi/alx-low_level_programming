#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arrays of chars,
 * and initialized it with a specific char
 * @size: the size of the array
 * @c: the specific array
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		for (i = 0; s[i] != '\0'; i++)
		{
			s[i] = c;
		}
		return (s);
	}
}
