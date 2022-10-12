#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: Array to be passed
 * @size: Number of elements in array
 * @cmp: Pointer to function
 *
 * Return: Index of first element for which cmp function
 * does not return 0.
 * Otherwise, if no element matches or if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp) (array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
