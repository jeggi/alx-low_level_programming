#include "main.h"
/**
*read_textfile - a function that reads a text file.
*@filename: the text file
*@letters: every letters
*Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc, s, w;
	char buff[BUFSIZ];

	if (filename == NULL || letters == 0)
		return (0);

	doc = open(filename, O_RDONLY);
	if (doc == -1)
		return (0);

	s = read(doc, buff, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, s);
	if (w == -1)
		return (0);

	if (s != w)
		return (0);

	close(doc);

	return (w);
}
