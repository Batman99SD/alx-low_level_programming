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
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
