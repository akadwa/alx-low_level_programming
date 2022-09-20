#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: pointer to a variable of type char
 *
 */

void puts_half(char *str)
{
	int length = 0, i = 0, n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 1)
	{
		n = (length - 1) / 2;
		n += 1;
	} else
	{
		n = length / 2;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
