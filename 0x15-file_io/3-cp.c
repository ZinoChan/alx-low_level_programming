#include "main.h"
#define BYTE_SIZE 1024
/**
 * p_use - print usage
 * Return: void
*/
void p_use(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}

/**
 * p_err - print error
 * @message: err message
 * @filename: name of file
 * @code: exit code
 * Return: void
*/
void p_err(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(code);
}

/**
 * main - entry point
 * @argc: arguments num
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *from_n, *to_n, map[BYTE_SIZE];
	int source, dest, the_R, the_W;

	if (argc != 3)
		p_use();
	from_n = argv[1], to_n =  argv[2];
	dest = open(from_n, O_RDONLY);
	if (dest == -1)
	{
		p_err("Can't read from file", argv[1], 98);
	}
	source = open(to_n, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (source == -1)
	{
		p_err("Can't write to", argv[2], 99);
	}
	the_R = read(dest, map, BYTE_SIZE);
	if (the_R == -1)
	{
		p_err("Can't read from file", argv[1], 98);
	}
	while (the_R > 0)
	{
		the_W = write(source, map, the_R);
		if (the_W == -1)
		{
			p_err("Can't write to", argv[2], 99);
		}
		the_R = read(dest, map, BYTE_SIZE);
	}
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest),
		exit(100);
	if (close(source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source),
		exit(100);
	return (0);
}
