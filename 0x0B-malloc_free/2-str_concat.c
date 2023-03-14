#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string result
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1, size2 = 0;
	int l1, l2 = 0;

	if (s1 == NULL)
		size1 = 0;
	while (s1 != NULL && s1[size1] != '\0')
	{
		size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	while (s2 != NULL && s2[size2] != '\0')
	{
		size2++;
	}

	str = malloc(size1 + size2 + 2);
	if (str == NULL)
		return ("");
	while (s1 != NULL && s1[l1])
	{
		str[l1] = s1[l1];
		l1++;
	}

	while (s2 != NULL && s2[l2] != '\0')
	{
		str[l1 + l2] = s2[l2];
		l1++;
	}
	str[l1 + l2] = '\0';
	return (str);
}

