#include "main.h"
#include <stdio.h>

/**
 * _abs - Gives the absolute value of an integer
 * @ab : the integer to be converted
 * Return: Absolute value of integer
 */

int _abs(int ab)
{
	if (ab > 0)
	{
		return (ab);
	} else if (ab < 0)
	{
		return ((ab * -1));
	}
	return (0);

}
