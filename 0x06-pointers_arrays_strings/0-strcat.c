#include "main.h"

/**
 * _strcat - function commute strings
 * @dest: pointer to char
 * @src: pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int s;
	int j;

	s = 0;
	j = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[j] != '\0')
	{
		dest[s] = src[j];
		j++;
		s++;
	}

	dest[s] = '\0';
	return (dest);
}
