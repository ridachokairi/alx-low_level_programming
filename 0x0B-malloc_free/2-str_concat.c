#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, l = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	conc = malloc(sizeof(char) * l);
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] ; i++)
		conc[j++] = s1[i];
	for (i = 0 ; s2[i] ; i++)
		conc[j++] = s2[i];
	return (conc);
}
