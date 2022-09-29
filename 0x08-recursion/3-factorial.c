#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: Number to be calculated using factorial
 *
 * Return: Integer answer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
