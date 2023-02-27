#include "main.h"
/**
 * _puts - prints
 * @str: ggfhfh
 * Return: 0
 */
void _puts(char *str)
{
	int i, j;
	char *text = str;

	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
	_putchar(text[j]);
	}
	_putchar('\n');
}
