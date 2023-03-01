#include "main.h"

/**
 * puts_half - print half of string
 *
 * @str: string pointer
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len += 1;
	}

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

