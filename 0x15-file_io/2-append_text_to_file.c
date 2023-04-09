#include "main.h"

/**
 * append_text_to_file - is a function appends text at the end of a file.
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure or if @filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
