#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 * This is a program that prints all possible different combinations
 * of three digits
 *
 * Description: The main function is the first function that is executed
 * Return: Always (0)
 */

int main(void)
{
	int j;
	int i;
	int k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				if (i != j && i != k && k != j && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
