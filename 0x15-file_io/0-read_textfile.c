#include "holberton.h"
/**
 *read_textfile - Read and write the text of a file into the std ouput
 *@filename: Name of the file
 *@letters: Number of chars to read and write
 *Return: 0 if fails, size of writing if succes
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t wrote, readfd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	readfd = read(fd, buf, letters);
	if (readfd == -1)
	{
		free(buf);
		return (0);
	}
	wrote = write(STDOUT_FILENO, buf, readfd);
	if (wrote == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (readfd);
}
