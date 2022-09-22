#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1 : String 1 (points to char)
 * @s2 : String 2 (points to char)
 *
 * Return: Number of differences
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	while (s1 == s2)
	{
		if (s1 == '\0' || s2 == '\0')
		{
			break;
			s1++;
			s2++;
			count++;
		}
	}

	if (s1 == '\0' && s2 == '\0')
		return (0);
	else
		return (count);
}
