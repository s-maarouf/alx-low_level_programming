#include "main.h"

/**
 * create_file - is a function that creates a file
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 if @filename is NULL or can not be written
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
