#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
