#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		l1++;
	for (i = 0; s2[i]; i++)
		l2++;
	if (l2 > n)
		l2 = n;
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < l1; j++)
		s[j] = s1[j];
	for (j = 0; j < l2; j++)
		s[j + l1] = s2[j];
	s[l1 + l2] = '\0';
	return (s);
}
