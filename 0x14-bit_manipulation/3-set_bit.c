#include "main.h"
/**
 * set_bit - index value of a bit to 1
 * @index: from 0 to the bit of interest
 * @n: potr for int i
 *
 * Return: 1 for success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
