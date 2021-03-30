#include "holberton.h"

/**
 *read_textfile - read text file and prints it to the POXIS stdout
 *@filename: name of the file to print
 *@letters: number of letter it should be print and read
 *Return: number of letters or 0 if fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buff, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);
	close(fd);
	free(buff);
	return (w);
}
