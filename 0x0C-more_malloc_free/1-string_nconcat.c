#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size
 *
 * Return: full string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		n = len_s2;
	str = malloc(len_s1 * sizeof(char) + n + len_s2);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i + j] = s2[j];
	}
	str[len_s1 + n] = '\0';
	return (str);
}


