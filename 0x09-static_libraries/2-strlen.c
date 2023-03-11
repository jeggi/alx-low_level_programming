#include "main.h"

/**
 * _strlen - the lenght of the string
 * @s: input string
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	{
	return (count);
	}
}
