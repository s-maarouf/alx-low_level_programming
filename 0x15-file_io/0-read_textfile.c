#include "main.h"

/**
 * read_textfile - is a that reads a text file and prints it
 *		to the POSIX standard output.
 *
 * @filename: is the name of the file to read
 * @letters: is the number of letters it should read and print
 *
 * Return: 0 if @filename is NULL or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		return (0);
	}
	close(o);
	return (w);
}
