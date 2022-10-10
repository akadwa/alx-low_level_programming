#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from
 *
 * Return: 0 on SUCCESS
 */

int main()
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
