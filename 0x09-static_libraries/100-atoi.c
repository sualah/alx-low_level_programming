#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: a string pointer to be converted
 *
 * Return: the converted value or 0 otherwise
 */
int _atoi(char *s)
{
	int value = 0;
	int len = 0;
	int sign = 1;


	while (s[len] != '\0')
	{
		if (s[len] == '-' && s[len + 1] != ' ')
		{
			sign = -1;
			len++;
		} else if (s[len] == '+')
		{
			sign = 1;
			len++;
		}

		if (s[len] >= '0' && s[len] <= '9')
		{
			value = value * 10 + (s[len] - '0');
			len++;
		} else
		{
			if (value != 0)
				break;
			len++;
		}
	}
	return (value * sign);
}
