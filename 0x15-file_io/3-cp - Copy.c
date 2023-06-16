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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
	int file_from, file_to, err_close;
	ssize_t nwchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
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
		nwr = write(file_to, buf, nwchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
