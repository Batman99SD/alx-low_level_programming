#include "main.h"
/**
 *binary_to_uint - convert from binary to decemal.
 *@b: string contain the binary number.
 *Return: returns 0 or unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result = result | (b[i] - '0');
			i++;
		}

		else
		{
			return (0);
		}
	}

	return (result);
}
