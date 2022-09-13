#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n : where last digit is taken from
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int last = (n % 10);

	if (n < 0)
	{
		last = (n * -1);
	}

	_putchar(last + '0');
	return (last);

}
