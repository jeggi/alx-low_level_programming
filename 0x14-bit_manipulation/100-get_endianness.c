#include "main.h"
/**
 *get_endianness - iheiks the endianness
 *Return: 0 if edianness is big and 1 if little
 */
int get_endianness(void)
{
	unsigned int s;
	char *i;

	s = 1;
	i = (char *) &s;

	return ((int)*i);
}
