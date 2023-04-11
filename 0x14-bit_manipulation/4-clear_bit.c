#include "main.h"
/**
 *clear_bit - This is to set the value of a bit to 0 of a given index
 *@n: Pointer to ULI (unsigned long int)
 *@index: index of the bit
 *Return: 1 it works and -1 it did not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;

	if (*n & s)
		*n ^= s;

	return (1);
}
