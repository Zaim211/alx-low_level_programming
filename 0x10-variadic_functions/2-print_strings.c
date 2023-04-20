#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: The number of integers passed to hte function
 * @separator: The string to be printed between numbers
 * @...: A variable number of numbers to be printed
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			print("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator)
	}

	printf("\n");

	va_end(strings);
}
