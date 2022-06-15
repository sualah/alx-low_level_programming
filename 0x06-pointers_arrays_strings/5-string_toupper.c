#include "main.h"

/**
 * string_toupper - change string to uppercase
 * @s: char string argument
 *
 * Description: changes all lowercase letters of string to uppercase
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
