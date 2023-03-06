#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	int digit = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / digit >= 10)
	{
		digit *= 10;
	}

	while (digit > 0)
	{
		char c = '0' + n / digit;

		_putchar(c);
		n %= digit;
		digit /= 10;
	}
}
