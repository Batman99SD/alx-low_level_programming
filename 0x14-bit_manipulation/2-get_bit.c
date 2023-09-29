#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * Return: Returns the value of index or -1.
 * @n: the input.
 * @index: index number.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
