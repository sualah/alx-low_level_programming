#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 *
 * @str: a pointer to string
 *
 * Return: a character pointer
 */
char *rot13(char *str)
{
	char *alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (alphabets[j] != '\0')
		{
			if (alphabets[j] == str[i])
			{
				str[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
