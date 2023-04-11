#include "main.h"
/**
 *append_text_to_file - this funtion appends text to the end of a file
 *@filename: the name of the file
 *@text_content: This is the content of the file
 *Return: 1 on succuess and -1 on failure
 */
 
int append_text_to_file(const char *filename, char *text_content)
{
    int doc, letters, rwr;

	if (!filename)
		return (-1);

	doc = open(filename, O_WRONLY | O_APPEND);

	if (doc == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(doc, text_content, letters);

		if (rwr == -1)
			return (-1);
	}

	close(doc);

	return (1);
}
