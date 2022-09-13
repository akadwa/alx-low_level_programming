#include "main.h"
#include <stdio.h>

/**
 * _abs - Gives the absolute value of an integer
 * @n : the integer to be converted
 * Return: Always 0(success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		printf("%d", n);
	} else
	{
		printf("-%d", n);
	}

	return (0);

}
