#include "main.h"
/**
 * _isdigit - _isdigit: is digit or not.
 *
 * @c: check fot input.
 *
 * Return: return 1 if digit return 0 if not.
 */
int _isdigit(int c)
{
	int c;
	if (c >= 0 && c <= 9 )
		return (1);
	else
		return (0);
}
