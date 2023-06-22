#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all paramenters
 * @n: first number
 * @...: all other numbers as vaiable argument
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);
	va_start(args, n);
	result = 0;
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		result += value;
	}
	va_end(args);
	return (result);
}

