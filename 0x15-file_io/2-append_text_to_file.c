#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The file's name.
 * @text_content: Appended text content.
 *
 * Return: 1 if the file exists, -1 if it doesn't exist
 * or an error is encountered.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s;
	int letters;
	int r;

	if (!filename)
		return (-1);

	s = open(filename, O_WRONLY | O_APPEND);

	if (s == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		r = write(s, text_content, letters);

		if (r == -1)
			return (-1);
	}

	close(s);

	return (1);
}
