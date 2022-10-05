#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 *
 * @size: Size of array
 * @c: character
 *
 * Return: char else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(c) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
