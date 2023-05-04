#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: Char string
 * Return: converted decimal or 0 if char is uncinvertable
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		n <<= 1;
		if (b[x] == '1')
		{
			n += 1;
		}
	}
	return (n);
}
