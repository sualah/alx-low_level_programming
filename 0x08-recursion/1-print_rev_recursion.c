#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: string pointer
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
	{
		_print_rev_recursion(s + 1);

		write(STDOUT_FILENO, s, 1);
	}

}
