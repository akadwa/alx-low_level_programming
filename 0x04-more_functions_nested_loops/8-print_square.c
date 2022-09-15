#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @size: Dimensions of the square
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
