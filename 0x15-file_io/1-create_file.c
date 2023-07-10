#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content writed in the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nmbletters;
	int n;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nmbletters = 0; text_content[nmbletters]; nmbletters++)
		;
	n = write(fd, text_content, nmbletters);

	if (n == -1)
		return (-1);

	close(fd);

	return (1);
}
