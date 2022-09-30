#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
