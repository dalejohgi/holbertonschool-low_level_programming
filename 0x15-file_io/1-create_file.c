#include "holberton.h"
/**
 *create_file - Creates a file and write text in it
 *@filename: Name of the file
 *@text_content: text to be index
 *Return: 1 if success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t wrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
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
