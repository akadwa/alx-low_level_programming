#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest : The destination value (points to char)
 * @src : The source value (points to char)
 * @n : Number of times to be copied
 *
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[j] = src [j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
