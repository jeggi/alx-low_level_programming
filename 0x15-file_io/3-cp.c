#include "main.h"
/**
 * error_file - checks if files can open using dprintf
 * @doc_from: where the file is from
 * @argv: the arguement
 * @doc_to: where the file would be to
 * Return: this is a journey of no return
 */
void error_file(int doc_from, int doc_to, char *argv[])
{
	if (doc_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (doc_to == -1)
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
	int doc_from, doc_to, err_close;
	ssize_t nwchar, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp doc_from doc_to");
		exit(97);
	}

	doc_from = open(argv[1], O_RDONLY);
	doc_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(doc_from, doc_to, argv);

	nwchar = 1024;
	while (nwchar == 1024)
	{
		nwchar = read(doc_from, buf, 1024);
		if (nwchar == -1)
			error_file(-1, 0, argv);
		nwr = write(doc_to, buf, nwchar);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(doc_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", doc_from);
		exit(100);
	}

	err_close = close(doc_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", doc_from);
		exit(100);
	}
	return (0);
}
