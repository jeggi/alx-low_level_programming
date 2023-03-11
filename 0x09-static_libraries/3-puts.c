#include "main.h"

/**
 * _puts - print a function that follow a new line.
 * @str:input string.
 * Return: 0 Always.
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
