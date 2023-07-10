#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile - read text file and print it to standard output
 * @filename: name of text file
 * @letters: text
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	File file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	 buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytesWritten);
}
