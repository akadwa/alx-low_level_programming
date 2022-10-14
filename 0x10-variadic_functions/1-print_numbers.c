#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints numbers, followed by new line
 *
 * @seperator: Sperator used between numbers
 * @n: Number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
