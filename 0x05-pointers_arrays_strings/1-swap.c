#include "main.h"

/**
 * swap_int - Swaps the  values of two integers
 *
 * @a : to be swapped with b
 * @b : to be swapped with a
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
