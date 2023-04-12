#include "main.h"
/**
 * error_file - checks if files can open using dprintf
 * @file_from: where the file is from
 * @argv: the arguement
 * @file_to: where the file would be to
 * Return: this is a journey of no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: this file is empty %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: You can't write into this %s\n", argv[1]);
		exit(99);
	}
}

/**
 * main - cheking this code
 *@argc: this is the arguement
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	ssize_t nwchars, wr;
	int file_from, file_to, mis_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Use - copy file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nwchars = 1024;
	while (nwchars == 1024)
	{
		nwchars = read(file_from, buf, 1024);
		if (nwchars == -1)
			error_file(-1, 0, argv);

		wr = write(file_to, buf, nwchars);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	mis_close = close(file_from);
	if (mis_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: this doc %d\n can't close", file_from);
		exit(100);
	}
	return (0);
}
