#include <stdio.h>
/**
 * print_alphabet_x10 - print_alphabet_x10 ten times.
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
int n = 1;

while (n <= 10)

{
char c = 'a';

while (c < 'z')
{
putchar(c);
c++;
}
n++;
putchar('\n');
}
}
