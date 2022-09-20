#include "main.h"

/**
 * _strlen  - Returns the length of a string
 *
 * @s : pointer variable to type of integer
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}

	return (c);
}
