#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	double t1 = 1, t2 = 2;

	double nextTerm = t1 + t2;

	printf("%f, %f, ", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		printf("%f, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
