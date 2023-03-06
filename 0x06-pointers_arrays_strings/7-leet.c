#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @str: string pointer
 *
 * Return: string pointer
 */
char *leet(char *str)
{
	int i = 0;
	char *letters = "aAeEoOtTlL";
	char *leets = "4433007711";

	while (str[i] != '\0')
	{
		int j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = leets[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
