#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: Pointer of text file to be create
 * @text_content: Pointer of content of file to be create
 * Return: -1 if filename is NULL, if text_content is NULL create an empty file
 **/
int create_file(const char *filename, char *text_content)
{
	int w, fp, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, length);
	if (w == -1 || fp == -1)
		return (-1);
	close(fp);
	return (1);
}
