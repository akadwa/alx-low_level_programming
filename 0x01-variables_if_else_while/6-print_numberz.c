#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print all single digit numbers of base 10 from 0'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	putchar((nums%10) + '0');
	putchar('\n');

	return (0);
}
