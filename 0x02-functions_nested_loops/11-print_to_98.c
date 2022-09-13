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
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
	} else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
	}
}
