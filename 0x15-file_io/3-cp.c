#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void error_file(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);

/**
 * error_file - Handles file-related errors.
 * @file_from: File descriptor of the source file.
 * @file_to: File descriptor of the destination file.
 * @argv: Arguments vector.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t chars, new;
	char buf[1024];

	if (argc != 3)
	{
		fprintf(stderr, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buf, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);
		new = write(file_to, buf, chars);
		if (new == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
