#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *    Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned long int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%lu\n", sum);
	}
	return (0);
}
