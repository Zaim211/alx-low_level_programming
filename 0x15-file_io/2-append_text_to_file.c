#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: content to add to the end of the file.
 * Return: 1 if the file exists, -1 if the file doesn't exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	m = write(n, text_content, length);

	if (n == -1 || m == -1)
		return (-1);

	close(n);

	return (1);
}
