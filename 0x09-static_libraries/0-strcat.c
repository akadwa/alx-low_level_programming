#include "main.h"

/**
 * _strcat - Concatonates two strings
 *
 * @dest : The destination string
 * @src : The source string
 *
 * Return: Pointer to the resulting string (i.e dest)
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
