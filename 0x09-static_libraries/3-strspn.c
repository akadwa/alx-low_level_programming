#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Source string
 * @accept: Substring
 *
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, bytes = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				bytes++;
			}

			j++;
		}

		i++;
	}

	return (bytes);
}
