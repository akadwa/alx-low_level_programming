#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s : string to be checked
 * @c : character to check for
 *
 * Return: The string from character found (s), or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
