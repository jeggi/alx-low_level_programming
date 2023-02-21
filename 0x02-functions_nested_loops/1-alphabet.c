#include "main.h"
/**
 * print_alphabet - is to print alphabet
 *
 * Return: 0;
 *
 */
void print_alphabet(void)
	{
		char myLetter = 'a';

		while (myLetter <= 'z')
		{
			_putchar(myLetter);
			myLetter++;

		}
		_putchar('\n);
}

