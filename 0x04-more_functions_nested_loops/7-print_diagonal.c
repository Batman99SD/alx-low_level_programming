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
	int spc, bsh;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (spc = 0; spc < n; spc++)
		{
			for (bsh = 0; bsh < spc; bsh++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

