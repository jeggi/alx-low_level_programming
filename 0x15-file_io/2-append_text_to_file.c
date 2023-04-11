#include "main.h"

/**
 *_strlen - this returns the leghth of a string
 */
int _strlen(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

/**
 *append_text_to_file - this funtion appends text to the end of a file
 *@filename: the name of the file
 *@text_content: This is the content of the file
 *Return: 1 on succuess and -1 on failure
 */
 
int append_text_to_file(const char *filename, char *text_content) {
    ssize_t length, wr, doc;

    if (filename == NULL) {
        return -1;
    }

    doc = open(filename, O_WRONLY | O_APPEND, 0644);

    if (doc == -1) {
        return -1;
    }

    if (text_content == NULL) {
        close(doc);
        return 1;
    }

    length = _strlen(text_content);
    wr = write(doc, text_content, length);

    if (wr == -1) {
        close(doc);
        return -1;
    }

    close(doc);
    return 1;
}

