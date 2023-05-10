#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: Actual number of letters read and printed
 * 0 if function fails or filename is NULL
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *h;
	ssize_t fp;
	ssize_t t;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	h = malloc(sizeof(char) * lettters);
	t = (fp, h, letters);
	w = write(STDOUT_FILENO, h, t);

	free(h);
	close(fp);
	return (w);
}
