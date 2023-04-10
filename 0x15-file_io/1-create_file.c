#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written in the file name
 *
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nchars;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nchars = 0; text_content[nchars]; nchars++)
		;

	wrt = write(fd, text_content, nchars);

	if (wrt == -1)
		return (-1);

	close(fd);
	return (1);
}
