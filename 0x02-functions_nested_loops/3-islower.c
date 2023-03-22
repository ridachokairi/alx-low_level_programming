#include "main.h"

/**
 * _islower - Entry point
 * @c: character in ASCII code
 *  return: 1 if the c is lowercase , 0 otherwise
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
	_putchar('\n');
}
