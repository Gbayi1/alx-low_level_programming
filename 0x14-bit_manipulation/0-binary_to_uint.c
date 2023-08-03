#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int j;

	for (decimal = 0, j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[j] == '0')
			decimal <<= 1;
		else if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	return (decimal);
}
