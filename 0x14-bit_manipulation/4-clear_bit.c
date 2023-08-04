#include "main.h"

/**
 * * @n: points to the number to change
 * @index: index of the bit to clear
 * a function that sets the value of a bit to 0 at a given index.
 * clear_bit - set value of a given bit to 0
 *
 * Return: 1 for success, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
