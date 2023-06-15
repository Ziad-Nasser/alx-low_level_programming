#include "main.h"
/**
 * main - main.
 * @args: arg 1.
 * @argv: arg 2.
 * Return: 0 on success.
 */
int main(int args, char **argv)
{
	int		fd_in, fd_out, nbyte;
	char	buffer[1024];

	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_in = open(argv[1], O_RDONLY);
	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((nbyte = read(fd_in, buffer, 1024)))
	{
		if (fd_in == -1 || nbyte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		if (write(fd_out, buffer, nbyte) == -1 || fd_out == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	if (close(fd_in) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		return (100);
	}
	if (close(fd_out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out);
		return (100);
	}
	return (0);
}
