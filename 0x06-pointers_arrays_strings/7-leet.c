#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str : String to be encoded
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char og[5] = {'A', 'E', 'O', 'T', 'L'};
	char en[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < 5)
		{
			if (str[i] == og[j] || str[i] - 32 == og[j])
			{
				str[i] = en[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
