#include "main.h"
/**
*read_textfile - a function that reads a text file.
*@filename: the text file
*@letters: every letters
*Return: actual number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc, read_num;
	char *buf;

	if (filename == NULL)
		return (0);

	doc = open(filename, O_RDONLY);
	if (doc == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);

	read_num = read(doc, buf, letters);
	if (read_num == -1)
		return (0);

	buf[read_num] = '\0';

	if (write(STDOUT_FILENO, buf, read_num) != read_num)
		return (0);

	close(doc);
	free(buf);

	return (read_num);
}
