#include "main.h"
#include <fcntl.h>

/**
 * main - main function (copies file content).
 * @argc: argument count
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to\n", argv[0], -1);
	}

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open_source_file(file_from);
	fd_to = open_destination_file(file_to);
	copy_file_data(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_with_error(100, "Error: Can't close fd\n", "", -1);
	}
	return (0);
}

/**
 * exit_with_error - exits the program with standard error if copy fails.
 * @exit_code: exit code(97, 98, 99 or 100).
 * @message: Error message.
 * @arg1: first argument (file to copy from)
 * @arg2: second argument(copy to).
 */
void exit_with_error(int exit_code, const char *message,
		const char *arg1, int arg2)
{
	dprintf(STDERR_FILENO, message, arg1, arg2);
	exit(exit_code);
}

/**
 * open_source_file - opens source file.
 * @file_from: filename
 *
 * Return: file descriptor
 */
int open_source_file(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", file_from, -1);
	}
	return (fd_from);
}

/**
 * open_destination_file - opens destination file
 * @file_to: destination file.
 *
 * Return: file descriptor
 */
int open_destination_file(const char *file_to)
{
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);


	if (fd_to == -1)
	{
		exit_with_error(99, "Error: Can't write to file %s\n", file_to, -1);
	}
	return (fd_to);
}

/**
 * copy_file_data - copies data from first argument to second argument.
 * @fd_from: copy from here
 * @fd_to: paste data here.
 */
void copy_file_data(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			exit_with_error(99, "Error: Can't write to file %d\n", "", fd_to);
		}
	}

	if (bytes_read == -1)
	{
		exit_with_error(98, "Error: Can't read from file %d\n", "", fd_from);
	}
}
