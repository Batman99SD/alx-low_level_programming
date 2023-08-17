#include "main.h"
/**
 * print_square - print_square followed by ney line.
 *
 * @size: cheks for input
 *
 * Return: returns nothing.
 */
void print_square(int size)
{
	int i, j;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar(35);
			_putchar(35);
			_putchar('\n');
		}
	}
}
