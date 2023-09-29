#include "main.h"
/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to be cleared, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n = (*n & mask);

	return (1);
}
