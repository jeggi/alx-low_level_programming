#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: the text file
 * @letters: every letters
 *
 * Return: actual number of letters 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t s, w;
	int doc;

	if (filename == NULL)
		return (0);

	doc = open(filename, O_RDONLY);

	if (doc == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	s = read(doc, buf, letters);
	w = write(STDOUT_FILENO, buf, s);

	close(doc);

	free(buf);

	return (w);
}
