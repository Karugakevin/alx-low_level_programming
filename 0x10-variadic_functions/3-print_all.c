#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list point);
void print_string(va_list string);
void print_all(const char * const format, ...);

/**
 * print_char - prtints a character
 * @arg: variable to be passed
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_int - prints value of integers
 * @arg: variable to be passed
 *
 *
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - prints value of floats
 * @point: variable to be passed
 *
 */
void print_float(va_list point)
{
	float num;

	num = va_arg(point, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @string: variable passed
 *
 */
void print_string(va_list string)
{
	char *str;

	str = va_arg(string, char *);

	{
		if (str == NULL)
			printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
