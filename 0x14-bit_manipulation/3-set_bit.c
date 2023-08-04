#include "main.h"

/**
 * a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * set_bit - sets a bit at a given index to 1
 *
 * Return: 1 for success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
