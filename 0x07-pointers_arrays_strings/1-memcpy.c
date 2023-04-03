#include "main.h"

/**
 * _mempcy - copies memory area
 * @dest : the memory area to copy to 
 * @src: the memory area to copy from
 * @n: number of bytes to copy
 * Return: copied memory
 */

char *_mempcy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
