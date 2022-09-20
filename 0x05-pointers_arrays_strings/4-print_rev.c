#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s : points to variable of type char
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
