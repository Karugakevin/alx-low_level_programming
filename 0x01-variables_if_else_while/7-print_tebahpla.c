#include <stdio.h>
/**
 *  main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 *  Description- using the main function
 *  the program prints \" Programming all the alphabet in reverse
 *  Return: 0
 */
int main(void)
{
	char ch;

for (ch = 'z' ; ch >= 'a' ; ch--)
	putchar(ch);
putchar('\n');
return (0);
}
