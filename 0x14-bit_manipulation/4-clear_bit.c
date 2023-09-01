#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0.
 *
 * @n: This points to the number to be changed.
 *
 * @index: index of the bit you want to clear.
 *
 * Return: 1 for success, -1 if it fails..
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
