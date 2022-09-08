#include <stdio.h>

/**
 * main - Entry point
 *
 * Return Always 0 (success)
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %lu byte\n", sizeof(acharacter));
	printf("size of an int: %lu byte\n", sizeof(ainteger));
	printf("size of a long int: %lu byte\n", sizeof(along));
	printf("size of a long long: %lu byte\n", sizeof(alonglong));
	printf("size of a float: %lu byte\n", sizeof(afloat));

	return (0);
}
