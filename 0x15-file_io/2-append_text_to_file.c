#include "holberton.h"
/**
 *append_text_to_file - Insert text at the end of a file
 *@filename: Name of the file
 *@text_content: Text to add
 *Return: 1 if success or -1 if fails
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t wrote;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	wrote = write(fd, text_content, i);
	if (wrote == -1)
		return (-1);

	close(fd);
	return (1);
}
