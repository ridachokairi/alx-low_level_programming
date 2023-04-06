#include "main.h"

/**
 * *_strcpy - copies a string pointed by a pointer
 * @dest:the copied string
 * @src:the original string
 * Return: copied string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
