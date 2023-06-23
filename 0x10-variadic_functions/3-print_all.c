#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - print all types
 * @format: argument format
 * @...: all other numbers as variable argument
 *
 * Return: all 
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	while (*ptr)
	{
		c = *ptr;
		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (c == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			printf("%s", s == NULL ? "(nil)" : s);
		}
		ptr++;
		if (*ptr)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}


