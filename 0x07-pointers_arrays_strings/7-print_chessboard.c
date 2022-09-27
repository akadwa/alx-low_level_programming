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
		for (piece = 0; piece < 8; piece++)
		{
			_putchar(a[row][piece]);
		}

		_putchar('\n');
	}
}
