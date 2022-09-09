#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Print alphabet(minus e and q) using putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char first[] = {'a', 'b', 'c', 'd', '\0'};
	char second[] = {'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', '\0'};
	char third[] = {'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

	putchar(first, second, third);
	putchar('\n');

	return (0);
}
