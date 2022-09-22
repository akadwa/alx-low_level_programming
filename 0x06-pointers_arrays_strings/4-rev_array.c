#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers
 *
 * @a : Array of integers
 * @n : Thenumber of elements to swap
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
