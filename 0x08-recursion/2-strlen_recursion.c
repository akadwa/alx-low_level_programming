#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: Length of string to be calculated
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);

}
