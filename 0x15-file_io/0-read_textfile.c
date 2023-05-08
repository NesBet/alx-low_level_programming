#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The file's name.
 * @letters: Total number of letters printed.
 *
 * Return: Number of letters printed, else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sz;
	ssize_t nd, nr;
	char *buf;

	if (!filename)
		return (0);

	sz = open(filename, O_RDONLY);

	if (sz == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(sz, buf, letters);
	nr = write(STDOUT_FILENO, buf, nd);

	close(sz);

	free(buf);

	return (nr);
}
