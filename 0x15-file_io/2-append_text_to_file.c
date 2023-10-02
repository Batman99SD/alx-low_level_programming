#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: content add to file.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lnumber;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (lnumber = 0; text_content[lnumber]; lnumber++)
			;

		wrt = write(fd, text_content, lnumber);

		if (wrt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
