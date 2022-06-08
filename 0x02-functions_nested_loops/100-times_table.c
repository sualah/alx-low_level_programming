#include "main.h"

/**
 * print_times - check main
 * Describtion: prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing - prints to console
 */
void print_times_table(int n)
{
	int i, j;

	if (n == 0)
		_putchar('0');
	_putchar('\n');
	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				formatOutput(i * j);
			_putchar('\n');
		}
	}
}


/**
 * formatOutput - formatted characters to output
 * @n: number to format
 * Return: nothing
 */
void formatOutput(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
