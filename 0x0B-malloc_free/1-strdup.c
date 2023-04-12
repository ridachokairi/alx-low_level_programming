#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * _strdrp - returns a pointer to a newly allocated space
 * memory
 * @str: the copied string
 * Return: pointer
 */

char *_strdrp(char *str)
{
	int i, len = 0;
	char *cop;

	if (str = NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		l++;
	cop = malloc(sizeof(char) * (len + 1));

	if (cop == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cop[i] = str[i];
	cop[len] = '\0'
		return (cop);
}
