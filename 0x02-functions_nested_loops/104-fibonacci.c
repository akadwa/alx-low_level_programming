#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	unsigned long t1 = 1, t2 = 2;

	unsigned long nextTerm = t1 + t2;

	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		printf("%lu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
