#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase
 *
 * @str : String to be modified
 *
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}
