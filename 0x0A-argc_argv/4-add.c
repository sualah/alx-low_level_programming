#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: numberi
 * @argv: string pointer
 * Return: 1 if failed and 0 otherwise
 */
int main(int argc, char **argv)
{
	int i = 1;
	int result = 0;


	for (i = 1; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
