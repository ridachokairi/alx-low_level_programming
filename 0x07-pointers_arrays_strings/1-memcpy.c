#include "main.h"

/**
 * _mempcy - copies memory area
 * @dest : the memory area to copy to 
 * @src: the memory area to copy from
 * @n: number of bytes to copy
 * Return: a pointer to copied memory
 */

char *_mempcy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest - n);
}
