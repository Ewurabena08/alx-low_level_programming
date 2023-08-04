#include "main.h"

/**
 * a function that converts a binary number to an unsigned int.
 * @b: string containing binary number
 * binary_to_uint - converts a binary number to unsigned int
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_val1 = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val1 = 2 * dec_val1 + (b[j] - '0');
	}

	return (dec_val1);
}
