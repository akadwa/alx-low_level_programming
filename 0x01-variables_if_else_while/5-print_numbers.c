#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	printf("%d", nums);
	printf("\n");

	return (0);
}
