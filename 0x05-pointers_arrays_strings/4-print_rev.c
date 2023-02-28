#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by new line.
 *
 * @s: string pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length += 1;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
		length -= 1;
	}
	_putchar('\n');
}

