#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @str: pointer to string
 *
 * Return: string pointer
 */
char *cap_string(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		else if (str[len] >= 'a' && str[len] <= 'z')
		{
			if (str[len - 1] == ' ' || str[len - 1] == '!'
			|| str[len - 1] == '"' || str[len - 1] == '('
			|| str[len - 1] == ')' || str[len - 1] == '.'
			|| str[len - 1] == ';' || str[len - 1] == ','
			|| str[len - 1] == '?' || str[len - 1] == '{'
			|| str[len - 1] == '}' || str[len - 1] == '\n'
			|| str[len - 1] == '\t')
			{
				str[len] = str[len] - 32;
			}
		}
		len++;
	}
	return (str);
}

