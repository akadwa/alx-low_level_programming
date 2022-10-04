#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int t = 0;
	int a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		t += atoi(argv[a]);
	}

	printf("%d\n", t);
	return (0);
}
