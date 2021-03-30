#include "holberton.h"

/**
 *append_text_to_file - append text at the end of a file
 *@filename: name of the file
 *@text_content: Null terminated string to add at the end of file
 *Return: -1 f fails , 1 if success
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
