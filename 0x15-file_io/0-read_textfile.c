#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

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
	file = open(filename, 0_RDONLY);
	if (file == NULL)
		return (0);
	 buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytesRead = read(file, buffer, letters);
	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
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
