#include "main.h"
/**
 * _isalpha - _isalpha: print 1 if lowercase.
 * @c: cheks input of function
 *  Return: return 1 if 'c' is lower
 *          otherwise always 0.
 **/
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
if (c >= 97 && c <= 122)
return (1);
return (0);
}

