#include "main.h"

/**
 * _islower - 'Checks for lowercase character'
 * @c: letter being tested
 * Return: 1 if lowercase; 0 if other.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	return (0);

}
