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
		++dest;
		++length;
	}

	for (i = 0; i <= '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (dest);
}
