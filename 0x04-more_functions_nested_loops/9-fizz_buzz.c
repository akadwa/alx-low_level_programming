#include <stdio.h>

/**
 * main - A program thats prints the numbers 1 to 100 with conditions:
 * if the number is a multiple of 3, then print "Fizz",
 * if the number is a multiple of 5, then print "Buzz",
 * if the number is a multiple of 3 and 5, print "FizzBuzz".
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int = i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else if (((i % 3) == 0) && (((i % 5) == 0))
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}

