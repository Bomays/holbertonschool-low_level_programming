#include <stdlib.h>
#include <stdio.h>
/**#include <sys/stat.h>*/
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - function that append text to the end of a file
 *
 * @filename: the  file we want to append text at its end
 * @text_content: it is a NULL terminated string to add at the end of the file
 *
 * Return:
 * - returns 1 on success, -1 on failure of the file creation
 * - returns -1 if filename is NULL
 * - If text_content is NULL, do not add anything to the file.
 *   Return 1 if the file exists and -1 if the file does not exist
 *   or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytesWritten;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytesWritten = write(fd, text_content, len);

		if (bytesWritten == -1 || bytesWritten != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
