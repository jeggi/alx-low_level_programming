#include "main.h"
/**
 *set_bit - this function will sets the value of a bit to 1 based on an index
 *@n: This is a pointer of an ULI (unsigned long int)
 *@index: The index of bit
 *Return: 1 means it works -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	*n = (*n | s);

	return (1);
}
