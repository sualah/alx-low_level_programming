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
	int num1;
	int num2;

	if (argc >= 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
		printf("Error\n");
	exit(EXIT_SUCCESS);
}
