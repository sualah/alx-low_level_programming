#include "main.h"
/**
 * print_rev - print reverse backward
 * @s: character string pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
	{
		_putchar(s[len]);
		--len;
	}
	_putchar('\n');
}
