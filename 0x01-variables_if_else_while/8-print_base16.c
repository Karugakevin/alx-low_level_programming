#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Description: using the main function
 * this program prints \"Programming is all the numbers
 * of base 16 in lowercase
 * Return: Always (0) success
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');

	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
