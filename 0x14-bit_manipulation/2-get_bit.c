#include "main.h"
/**
 *get_bit - This will return the value of bit
 *@n: This is an unsigned long int input
 *@index: This is the index of a bit
 *Return: this is the value of the bit
 */
 int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;
	
	if (n == 0 && index < 64)
		return (0)

	int k = 63;
	
	for (s =0; s <= k; n >>= 1, s++)
	{
			if (index == s)
			{
				return (n & 1);
			}
	}
	
	return (-1);
}
 