#include <stdlib.h>
#include "main.h"
/**
 * puts2 - print every other character
 * @str: character string pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (atoi(str[len]) % 2 == 0)
			_putchar(str[len];
		len++;
	}
}
