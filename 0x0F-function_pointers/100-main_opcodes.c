#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - print
 * @buffer: string
 * @num_bytes
 * Return: nothing
 */
void print_opcodes(const char *buffer, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", buffer[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument list
 * Return: 0 if success 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	void *main_address = (void *)&main;
	char *main_ptr = (char *)main_address;

	print_opcodes(main_ptr, num_bytes);
	return (0);
}
