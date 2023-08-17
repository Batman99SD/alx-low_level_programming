#include "main.h"
/**
 * print_numbers - print_numbers: print number followed by new line.
 *
 * Return: returns nothing.
 */
void print_numbers(void)
{
	int n = 48;

	for (n = 48; n = 58; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar(10);
}
