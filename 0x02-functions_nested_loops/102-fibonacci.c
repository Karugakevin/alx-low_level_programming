#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * ,starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fib1, fib2, sum;

	for (i = 1 ; i <= 50 ; ++i)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

