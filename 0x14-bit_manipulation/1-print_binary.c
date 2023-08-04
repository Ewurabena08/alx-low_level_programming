#include "main.h"

/**
 * a function that prints the binary representation of a number.
 * print_binary - prints binary equivalent of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, count1 = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count1++;
		}
		else if (count1)
			_putchar('0');
	}
	if (!count1)
		_putchar('0');
}
