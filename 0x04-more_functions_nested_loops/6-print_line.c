#include "main.h"
/**
 * print_line - print line
 * @n: value
 * Description: print line
 * Return: nu
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar(95);
		if (i <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
