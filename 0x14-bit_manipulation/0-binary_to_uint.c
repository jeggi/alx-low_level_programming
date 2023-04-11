#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to the string containing the binary number.
 *
 * Return: the converted unsigned int, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int un = 0;
	int length, len;
	unsigned int base_two = 1;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		un <<= 1;

		if (b[length] == '1')
		{
			un += 1;
		}
	}

	return (un);
}
