#include "main.h"

/**
 * _mempcy - copies memory area
 * @dest : the memory area to copy to 
 * @src: the memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer
 */

char *_mempcy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
