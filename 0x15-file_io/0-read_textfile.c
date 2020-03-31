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
	int fd;
	char buf[10000];
	ssize_t size, wrote;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	size = read(fd, buf, letters);
	if (size == -1)
		return (0);

	wrote = write(STDOUT_FILENO, buf, letters);
	if (wrote == -1)
		return (0);

	close(fd);
	return (size);
}
