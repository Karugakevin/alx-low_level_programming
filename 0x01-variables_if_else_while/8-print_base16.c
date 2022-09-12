#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercases
 *
 * Description- using the main function
 *  program that prints all the numbers of base 16 in lowercases
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
putchar((i % 10) + '0');

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
