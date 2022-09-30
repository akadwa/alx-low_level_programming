#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s : points to a memory area
 * @b : constant byte used to fill
 * @n : number of bytes to be filled
 *
 * Return: The memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
