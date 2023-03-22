#include "main.h"

/**
 * _islower - returns 1 if the character c is lower and
 * returns 0 if it is not the case
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);/*character is lower*/
	else
		return (0);/*character is not lower*/
}
