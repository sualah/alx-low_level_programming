#include "main.h"
/**
 * _puts - print string followed by new line.
 * @str: character string argument pointer
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len++;
	}
	_putchar('\n');

}
