#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: times table output
 */

void times_table(void)
{
	int row, col, current;

	for (row = 0; row <= 9; row++)
	{
		_putchar("0, ");
		for (col = 1; col <= 9; col++)
		{
			current = (row * col);
			if ((current / 10) > 10)
			{
				_putchar((current / 10) + '0');
			} else
			{
				_putchar(' ');
			}
			_putchar((current % 10) + '0');

			if (col < 9)
			{
				_putchar(", ");
			}
		}
		_putchar('\n');
	}
}
