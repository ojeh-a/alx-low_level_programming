#include "main.h"

/**
 * exit_with_error - exit with error if process fails
 * @exit_code: exit code
 * @message: error message
 * @arg: argument
 */
void exit_with_error(int exit_code, const char *message, const char *arg1, const char *arg2)
{
    dprintf(STDERR_FILENO, message, arg1, arg2);
    exit(exit_code);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to\n", argv[0], "");
	}

    	file_from = argv[1];
	file_to = argv[2];

    	fd_from = open(file_from, O_RDONLY);
    	if (fd_from == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", file_from, "");
    	}

    	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    	if (fd_to == -1)
	{
        	exit_with_error(99, "Error: Can't write to file %s\n", file_to, "");
    	}

    	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    	{
        	bytes_written = write(fd_to, buffer, bytes_read);
        	if (bytes_written != bytes_read)
		{
            	exit_with_error(99, "Error: Can't write to file %s\n", file_to, "");
        	}
    	}

    	if (bytes_read == -1)
    	{
        	exit_with_error(98, "Error: Can't read from file %s\n", file_from, "");
    	}

    	if (close(fd_from) == -1 || close(fd_to) == -1)
    	{
        	exit_with_error(100, "Error: Can't close fd\n", "", "");
    	}

    	return (0);
}
