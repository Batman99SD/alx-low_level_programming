#include "main.h"
/**
 *set_bit -sets the value of a bit to 1 at a given index.
 *@n: input.
 *@index: index
 *Return: 1 if seccus -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	mask = 1UL << index;

	*n = (*n | mask);

	return (1);
}
