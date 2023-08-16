#include "main.h"

/**
*print_sign - print_sign: prints a + if 'n' is positive
*@n: takes input from function.
*Return: return 1 if positive
*/
int print_sign(int n)
{
if (n > 0)
_putchar(43);
return (1);
if (n == 0)
_putchar(48);
return (0);
if (n < 0)
_putchar(45);
return (-1);
}
