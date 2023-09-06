#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filenme, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_with_error(int exit_code, const char *message,
		const char *arg1, int arg2);
int open_source_file(const char *file_from);
int open_destination_file(const char *file_to);
void copy_file_data(int fd_from, int fd_to);

#endif
