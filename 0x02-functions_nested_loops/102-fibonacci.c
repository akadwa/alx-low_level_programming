#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	unsigned long i;
	unsigned long t1 = 1, t2 = 2;

	unsigned long nextTerm = t1 + t2;

	printf("%lu, %lu, %lu, ", t1, t2, nextTerm);

	for (i = 3; i <= 50; i++)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (i < 47)
		{
			printf("%lu, ", nextTerm);
		}
	}

	return (0);
}
