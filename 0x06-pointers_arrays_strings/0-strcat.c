#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the appended string
 * @dest: the first string
 * Return: string
 *
 */

char *_strcat(char *dest, char *src)
{
	int l1, l2, i;
	char *dest1 = dest;
	char *src1 = src;

	while (*src1 != '\0')
	{
		l1++;
		src1;
	}
	while (*dest1 != '\0')
	{
		l2++;
		dest1;
	}
	for (i = 1; i < l1; i++)
	{
		dest[i + l2] = src[i];
	}
	return (dest);
}
