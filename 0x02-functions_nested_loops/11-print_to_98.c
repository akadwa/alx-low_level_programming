#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n : given integer
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			printf(", ");
		}
	} else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
	}
}
