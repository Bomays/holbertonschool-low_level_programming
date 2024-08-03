#include <stdlib.h>
#include <stdio.h>
/**#include <sys/stat.h>*/
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * it to the POSIX standard output.
 *
 * @filename: the  file we want to create
 * @text_content: it is a NULL terminated string to write to the file
 *
 * Return: returns 1 on success, -1 on failure of the file creation
 * returns -1 if filename is NULL
 * finally if text_content is NULL it creates an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int  bytesWritten;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytesWritten =  write(fd, text_content, len);

		if (bytesWritten != -1 || bytesWritten != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
