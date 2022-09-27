#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 *
 * @a: array of pieces
 */

void print_chessboard(char (*a)[8])
{
	int row, block;

	for (row = 0; row < 8; row++)
	{
		for (block = 0; block < 8; block++)
		{
			_putchar(a[row][block]);
		}

		_putchar('\n');
	}
}
