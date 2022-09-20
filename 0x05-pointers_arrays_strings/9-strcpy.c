#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the termingating null byte,
 * to the  buffer pointed to by dest
 *
 * @src : String to be copied
 * @dest : Copied string to be pasted
 *
 * Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
