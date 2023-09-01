#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1.
 *
 * @index: index of the bit to be set to 1.
 * @n: points to the number to be changed.
 *
 *
 * Return: 1 for success, -1 an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
