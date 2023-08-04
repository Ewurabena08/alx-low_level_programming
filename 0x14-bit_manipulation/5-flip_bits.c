#include "main.h"

/**
 * this script writes a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *  @a: first number
 * @b: second number
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int i, count2 = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ b;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count2++;
	}

	return (count2);
}
