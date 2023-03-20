#include <stdio.h>
/**
 * main Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putcher(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putcher(i);
	putcher('\n');
	return (0);
}
