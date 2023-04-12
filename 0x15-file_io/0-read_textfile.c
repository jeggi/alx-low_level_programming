#include "main.h"
/**
*read_textfile - this function that reads a text file.
*@filename: the text file
*@letters: every letters
*Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s, w;
	int doc;
	char *buf;

	if (filename == NULL)
		return (0);

	doc = open(filename, O_RDONLY);

	if (doc == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	s = read(doc, buf, letters);
	w = write(STDOUT_FILENO, buf, s);

	close(doc);

	free(buf);

	return (w);
}
