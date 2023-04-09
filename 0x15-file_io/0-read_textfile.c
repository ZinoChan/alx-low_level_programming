#include "main.h"

/**
 * read_textfile - reads a txt prints it to the POSIX standard output
 * @filename: filename
 * @letters: letters
 * Return: num of letters or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int the_F, the_R, the_W;
	char *map = malloc(letters * sizeof(char));

	if (filename == NULL || letters == 0 || map == NULL)
		return (0);

	the_F = open(filename, O_RDONLY);
	if (the_F == -1)
		return (0);
	the_R =  read(the_F, map, letters);
	if (the_R == -1)
	{
		free(map);
		return (0);
	}
	the_W = write(STDOUT_FILENO, map, the_R);

	if (the_W < 0)
	{
		free(map);
		return (0);
	}
	close(the_F);
	return (the_R);
}
