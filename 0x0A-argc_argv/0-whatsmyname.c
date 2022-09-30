#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: number of commands entered
 * @argv: string of command entered
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
