#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr -  a function that concatenates all the arguments
 * of your program.
 * @ac: number
 * @av: string array
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	char *str;
	int j;
	int index = 0;
	int len_av = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		len_av = strlen(av[j]);
		strcpy(str + index, av[j]);
		index += len_av;
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}

