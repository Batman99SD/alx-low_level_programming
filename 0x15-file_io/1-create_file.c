#include "main.h"

/**
 * create_file - a function thats creates a file
 * @filename: filename.
 * @text_content: text that writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int lnumber;
	int wrt;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lnumber = 0; text_content[lnumber]; lnumber++)
		;

	wrt = write(fp, text_content, lnumber);

	if (wrt == -1)
		return (-1);

	close(fp);

	return (1);
}
