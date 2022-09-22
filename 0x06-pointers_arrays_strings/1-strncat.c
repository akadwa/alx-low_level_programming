#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest : The destination value (points to a char)
 * @src : The source value (points to a char)
 * @n : The limit of the concatenation
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0, i = 0;

	while (dest[dlength] != '\0')
	{
		dlength++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dlength] = src[i];
		dlength++;
		i++;
	}

	dest[dlength + n + 1] = '\0';

	return (dest);

}
