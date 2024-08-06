#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * exit_error - function that prints an error message
 * to standard error and exit prog
 *
 * @exit_code: exit code while ending prog
 * @message: message printed to describe the error
 * @file: file descriptor related to the problem
 *
 * Return: void return
 */
void exit_error(int code, const char *message, const char *file, int fd)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);

	if (fd != -1)
	{
		close(fd);
	}
	exit(code);
}
/**
 * copy_from_to_file - program that copies
 * the content of a file to another file.
 *
 * @argc: arguments count - number of command line arguments
 * @argv: argument vectors - array of command line arguments
 *
 * Return: returns 0 when succeeded,
 * when failed see exit condition below
 *
 * Exit conditions:
 *	if the number of argument is not the correct one, exit with code 97
 *	if file_from does not exist, or if you can not read it, exit with code 98
 *	if you can not create or if write to file_to fails, exit with code 99
 *	if you can not close a file descriptor , exit with code 100
 */
int copy_from_to_file(int argc, char **argv)
{
	int fd_from, fd_to, fRead, fWrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit_error(98, "Can't read from file", argv[1], fd_from);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_error(99, "Can't write to", argv[2], fd_to);
	}
	while ((fRead = read(fd_from, buffer, 1024)) > 0)
	{
		fWrite = write(fd_to, buffer, fRead);
		if (fWrite == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_error(99, "Can't write to", argv[2], fd_to);
		}
	}
	if (fRead == -1)/*Verification*/
	{
		close(fd_from);
		close(fd_to);
		exit_error(98, "Can't read from file", argv[1], fd_from);
	}
	if (close(fd_from) == -1)
	{
		exit_error(100, "Can't close fd", argv[1], fd_from);
	}
	if (close(fd_to) == -1)
	{
		exit_error(100, "Can't close fd", argv[2], fd_to);
	}
	return (0);
}
/**
 * main - Entry point of the program.
 *
 * Usage:
 *     ./program_name file_from file_to
 *
 * @argc: arguments count - number of command line arguments
 * @argv: argument vectors - array of command line arguments
 *
 * Return: Returns 0 when succeeded. If there is an error, the
 *         program will exit with an exit code and print an error
 *         message to the standard error.
 *
 */
int main(int argc, char **argv)
{
	return (copy_from_to_file(argc, argv));
}
