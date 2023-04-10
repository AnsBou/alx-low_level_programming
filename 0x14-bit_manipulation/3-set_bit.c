#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at given index
 * @n: a pointer to the number to set bit of
 * @index: index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;

	return (1);
}
