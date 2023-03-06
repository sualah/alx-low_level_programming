#include "main.h"

/**
 * string_toupper - change to lowercase
 *
 * @str: string pointer
 *
 * Return: poniter to string
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			str[len] = str[len] - 32;
		len++;
	}
	return (str);
}
