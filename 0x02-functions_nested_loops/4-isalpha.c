#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character
 * @c : Character to be tested
 * Return: If condition met returns 1; if not then 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);

	return (0);
}
