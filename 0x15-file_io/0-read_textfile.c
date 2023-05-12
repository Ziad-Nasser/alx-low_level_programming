#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: file
 * @letters: number of letters
 * Return: numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rletters, wletters;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	{
		return (0);
	}
	rletters = read(fd, buf, letters);
	if (rletters == -1)
	{
		free(buf);
		return (0);
	}
	wletters = write(STDOUT_FILENO, buf, rletters);
	if (wletters == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (wletters);
}
