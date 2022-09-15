#include "main.h"

/**
 * print_line - Prints '_' for n times, followed by a new line.
 *
 * @n : number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
