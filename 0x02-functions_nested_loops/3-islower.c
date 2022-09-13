#include "main.h"

/**
 * _islower - entry point
 * Description: 'Checks for lowercase characters'
 * Return: 1 if lowercase; 0 if other.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
