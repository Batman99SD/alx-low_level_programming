#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_io_status(int status, const char *file_name, char mode);

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Arguments passed.
 *
 * Return: 0 on success, exit otherwise.
 */
int main(int argc, char *argv[])
{
	int src, dest;
	ssize_t n_read, wrote;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	check_io_status(src, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_io_status(dest, argv[2], 'W');

	while ((n_read = read(src, buffer, sizeof(buffer))) > 0)
	{
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_io_status(-1, argv[2], 'W');
	}

	close(src);
	close(dest);

	return (0);
}

/**
 * check_io_status - Checks if a file operation was successful.
 * @status: The status of the operation(e.g., file descriptor or return value)
 * @file_name: Name of the file.
 * @mode: 'O' for open, 'W' for write.
 *
 * Return: void.
 */
void check_io_status(int status, const char *file_name, char mode)
{
	if (status == -1)
	{
		if (mode == 'O')
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		else if (mode == 'W')
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);

		exit((mode == 'O') ? 98 : 99);
	}
}
