#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content
 * Return: 1 on success, -1 on failure (file can not be created
*/

int create_file(const char *filename, char *text_content)
{
	int the_F, l = 0;
	ssize_t the_W;

	if (filename == NULL)
		return (-1);

	the_F = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
		return (-1);

	return (1);

}
