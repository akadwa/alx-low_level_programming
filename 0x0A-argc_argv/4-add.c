#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (if no number), 1 (else)
 */

int main(int argc, char *argv[])
{
	int t = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (a = 1; a < argc; a++)
	{
		total += atoi(argv[a]);
	}

	printf("%d\n", total);
	return (0);
}
