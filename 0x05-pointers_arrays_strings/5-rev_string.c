#include <stdlib.h>
#include "main.h"
/**
 * rev_string - reverse string
 * @str: character string pointer
 *
 * Return: nothing
 */
void rev_string(char *str)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (len -= 1; len >= 0 ; len--)
		_putchar(s[len]);
}

