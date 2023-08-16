#include "main.h"

/**
*print_sign - print_sign: prints a + if 'n' is positive
*@n: takes input from function.
*Return: return 1 if positive
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(0);
	return (0);
}
else{
	_putchar('-');
	return (-1);
}
}
