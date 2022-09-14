#include "main.h"

/**
 * times_table - Prints out the 9 times table
 *
 * Return: Always 0(Success)
 */

void times_table(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (((n * i) / 10) > 0)
			{
				_putchar(((n * i) / 10) + '0');
				if (n < (9 * 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((n * i) % 10) + '0');
				if (n < (9 * 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
