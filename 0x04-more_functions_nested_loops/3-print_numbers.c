#include "main.h"
/**
 * print_numbers - print_numbers: print number followed by new line.
 *
 * Return: returns nothing.
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + 48);
	}
	_putchar('\n');
}