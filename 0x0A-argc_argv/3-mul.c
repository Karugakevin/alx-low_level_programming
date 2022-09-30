#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: string in arguments
 *
 * Return: Always "mul"
 *         1 if does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, n, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	i = atoi(argv[1]);
	n = atoi(argv[2]);
	mul = i * n;
	
	printf("%d\n", mul);

	return (0);
}
