#include "main.h"
/**
 *create_file - this is a function that create file
 *@filename: This is the file name
 *@text_content: This is the imput of the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int doc, retu, length = 0;
	mode_t const mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	doc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (doc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		retu = write(doc, text_content, length);
		if (retu == -1)
		{
			close(doc);
			return (-1);
		}
	}
	close(doc);
	return (1);
}
