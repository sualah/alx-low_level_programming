#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: seperator for numbers
 * @n: number of strings
 * @...: all other numbers as variable argument
 *
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *value = va_arg(args, char *);

		printf("%s", value == NULL ? "(nil)" : value);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
