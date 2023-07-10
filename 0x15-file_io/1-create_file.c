#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The file's name.
 * @text_content: Contents contained in the file.
 *
 * Return: 1 for success, -1 for error.
 */
int create_file(const char *filename, char *text_content)
{
	int s;
	int letters;
	int r;

	if (!filename)
		return (-1);

	s = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (s == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	r = write(s, text_content, letters);

	if (r == -1)
		return (-1);

	close(s);

	return (1);
}
