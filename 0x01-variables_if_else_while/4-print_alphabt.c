#include <stdio.h>

/**
 * main - Entry point
 * Description - 'Print alphabet(minus e and q) using putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c, !(c == 'e' && c == 'q');
		putchar('\n');

	return (0);
}
