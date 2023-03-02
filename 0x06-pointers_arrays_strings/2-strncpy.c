#include "main.h"

/**
 * * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string copy.
 * @src: thsfkd
 * @n: llkfks
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	do {
	if (!n--)
	return (ptr);
}
while ((*dest++ = *src++));
	while (n--)
	*dest++ = 0;

return (ptr);
}
