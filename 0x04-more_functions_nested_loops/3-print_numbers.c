#include "main.h"
/**
 * print_numbers - print_numbers: print number followed by new line.
 *
 * Return: returns nothing.
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
