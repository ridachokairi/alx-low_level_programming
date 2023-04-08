#include "main.h"
#include <stdio.h>

/**
 * print_program_name - prints the name of the program
 * @argc: arguments count
 * @argv: array of strings
 */

void print_program_name(int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf('\n');
}
