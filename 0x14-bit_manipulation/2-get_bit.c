#include "main.h"

/**
 * @n: number to search
 * @index: index of the bit
 * a function that returns the value of a bit at a given index.
 * get_bit - returns value of a bit at an index in a decimal number
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int m, unsigned int index)
{
	int bit_val2;

	if (index > 63)
		return (-1);

	bit_val2 = (m >> index) & 1;

	return (bit_val2);
}
