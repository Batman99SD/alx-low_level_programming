#include "main.h"
/**
 * print_line - print_line: prints a '_' for n times.
 *
 * @n: checkes for input.
 *
 * Return: returns nothung.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar(10);
}
