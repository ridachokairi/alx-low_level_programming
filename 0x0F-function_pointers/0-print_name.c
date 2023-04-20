#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string
 * @f: printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
