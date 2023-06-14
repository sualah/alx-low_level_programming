#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: string pointer
 * @s2: string pointer
 *
 * Return: string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
