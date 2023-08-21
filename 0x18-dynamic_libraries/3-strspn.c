#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: number of bytes in s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int flag = 0;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				n++;
				flag = 1;
				break;
			}
			accept++;

		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (n);
}
