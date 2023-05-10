#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Pointer of namefile that will be append to file
 * @text_content: Pointer of content that will be append to text
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fp, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, length);
	if (w == -1 || fp == -1)
		return (-1);
	close(fp);
	return (1);
}
