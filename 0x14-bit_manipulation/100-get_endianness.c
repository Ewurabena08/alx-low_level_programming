#include "main.h"

/**
 * get_endianness – This checks if the machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 *
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *c = (char *) &q;

	return (*c);
}
