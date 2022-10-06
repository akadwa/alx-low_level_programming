#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to include of the second string
 *
 * Return: Newly allocated space in memory (success),
 * NULL (failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0, j = 0, k = 0, a, b, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		ar[k++] = s1[a];
	for (b = 0; b < j; b++)
		ar[k++] = s2[b];

	ar[k] = '\0';
	return (ar);
}
