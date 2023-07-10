#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed, if fails returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, m;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, n);

	close(fd);

	free(buf);

	return (m);
}
