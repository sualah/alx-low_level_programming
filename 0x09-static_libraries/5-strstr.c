#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: string pointer
 * @needle: string pointer
 *
 * Return: string pointer
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*n != '\0' && *h == *n)
			{
				h++;
				n++;
			}
			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
