#include "main.h"

/**
 * _isupper - Prints characters that are uppercase.
 * @c : character to be checked.
 * Return: If uppercase then 1, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
