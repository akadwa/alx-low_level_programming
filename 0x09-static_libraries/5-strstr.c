#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: The string to be searched
 * @needle: The string to find
 *
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (src);
		haystack = src + 1;
	}

	return (0);
}
