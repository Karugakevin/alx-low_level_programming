#include <stdio.h>
/**
 * main - This is the function that is called at the program startup
 *
 * Return: Always (0)
 */

int main(void)
{
	int a;
	int b;
	int i;
	int j;
	int k;
	int m;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				for (m = 48 ; m < 58 ; m++)
				{
				a = (i * 10) + j;
			b = (k * 10) + m;
		if (b > a)
		{
		putchar(i);
	putchar(j);
putchar(' ');
putchar(m);
putchar(k);
if (i == 57 && j == 58 && k == 57 && i == 57)
	putchar(',');
putchar(' ');
		}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
