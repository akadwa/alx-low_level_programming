#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	int t1 = 1, t2 = 2;

	int nextTerm = t1 + t2;

	printf("%d, %d\n", t1, t2);

	for (i = 3; i <= 100; i++)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
