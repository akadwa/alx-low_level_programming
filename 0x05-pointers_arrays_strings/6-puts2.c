#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str : pointer to the variable of type char
 */

void puts2(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

}
