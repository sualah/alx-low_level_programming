#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: pointer to string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;

	while (s[len] != '\0')
	{
		len += 1;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}

