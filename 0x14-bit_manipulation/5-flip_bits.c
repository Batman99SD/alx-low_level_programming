#include "main.h"
/**
 * flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int num = 0;

	while (res)
	{
		num += res & 1;
		res >>= 1;
	}

	return (num);
}
