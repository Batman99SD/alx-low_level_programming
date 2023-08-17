#include "main.h"
/**
 * print_diagonal - print_diagonal: prints 'n' spaces followed by '\'.
 *
 * @n: checks for input.
 *
 * Return: returns nothing.
 */
void print_diagonal(int n)
{
	int bsh, spc;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (bsh = 0; bsh < n; bsh++)
		{
			for (spc = 0; spc < bsh; spc++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

