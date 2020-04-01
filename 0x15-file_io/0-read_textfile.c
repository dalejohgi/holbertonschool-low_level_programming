#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *read_textfile - Read the text in a file and print it to the stdout
 *@filename: Name of the file to read and write
 *@letters: Number of chars to read
 *Return: 0 if anything fails, else the size of the text
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /**file descriptor 0 1 2 o -1*/
	char *buf; /**pointer to where the text is gonna be allocated*/
	ssize_t size, wrote;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1) /**fd is -1 when fails*/
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	size = read(fd, buf, letters);
	if (size == -1)
	{
		free(buf);
		return (0);
	}
	wrote = write(STDOUT_FILENO, buf, letters);
	if (wrote == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (size);
}
