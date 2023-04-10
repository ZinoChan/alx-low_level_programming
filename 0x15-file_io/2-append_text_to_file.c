#include "main.h"

/**
 * append_text_to_file - ppends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int the_F, l = 0;
	ssize_t the_W;

	if (filename == NULL)
		return (-1);

	the_F = open(filename, O_RDWR | O_APPEND, 0600);
	if (the_F == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
		the_W = write(the_F, text_content, l);
		close(the_F);
	}
	if (the_W < 0)
		return (0);
	close(the_F);
	return (1);
}

