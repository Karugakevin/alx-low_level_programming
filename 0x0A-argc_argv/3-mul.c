#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: string in arguments
 *
 * Return: Result of multiplication or 1 when does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int i,  mul = 1;

	if (argc < 3 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
