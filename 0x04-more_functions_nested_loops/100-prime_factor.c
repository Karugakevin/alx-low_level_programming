#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143 followed by a new line
 *
 * Return: Always (0)
 */
int main(void)
{
	long int i;
	long int prime;

	i = 2;
	prime = 612852475143;
	while (i < (prime / 2))
	{
		if ((prime % i) == 0)
		{
			prime = prime / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
