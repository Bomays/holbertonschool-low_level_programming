#include <stdlib.h>
#include <stdio.h>
/**#include <sys/stat.h>*/
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: the  file we want to open and read
 * @letters: number of letters it could read and print
 *
 * Return: returns the actual number of letters it could read and print,
 * if it cannot been read or opened it returns 0.
 * If filename is NULL or if write fails or does not write the expected
 * amount of bytes, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[2050];
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	bytesRead = read(fd, buffer, letters);

	if (bytesRead  == -1)
	{
		close(fd);
		return (0);
	}

	bytesWritten = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		close(fd);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytesWritten);
}
