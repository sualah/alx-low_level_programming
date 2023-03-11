#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 if success and 0 otherswise
 */
int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
