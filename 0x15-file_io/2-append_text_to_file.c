#include "main.h"

/**
 * append_text_to_file - a function that appends text into a file
 * @filename: the name of the file
 * @text_content: the text to be appended
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bit_rot, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	if (text_content != NULL)
	{
		bit_rot = write(fd, text_content, i);
		if (bit_rot != i)
			return (-1);
	}
	close(fd);
	return (1);
}
