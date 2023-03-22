#include "main.h"

/**
 * _islower - Entry point
 *  returns: 1 if the character c is lowercase and
 * returns: 0 if it is not the case
 * @c : character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
