#include <stdio.h>
#include "main.h"
/**
 * main - main:print _putchar.
 * Return: 0.
 */
int main(void)
{
char str[] = "_putchar";
int ch;

for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
_putchar('\n');
return (0);
}
