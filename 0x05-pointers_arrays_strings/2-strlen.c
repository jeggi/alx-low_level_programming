#include "main.h"
/**
 * _strlen - count
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i;
	char *key = s;

	i = 0;
	while (key[i] != '\0')
	{
		i++;
	}
	return (i);
}
