#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated string on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, len;
	char *str_rep;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str_rep = malloc(sizeof(char) * (i + j + 1));
	if (str_rep == NULL)
	{
		free(str_rep);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str_rep[k] = s1[k];

	len = j;

	for (j = 0; j < len; j++, k++)
		str_rep[k] = s2[j];

	return (str_rep);
}
