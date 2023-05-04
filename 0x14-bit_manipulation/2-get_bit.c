#include "main.h"

/**
 * get_bit - Gives the value of the bit at given index
 *
 * @n: The num to check the bits
 * @index: index to check bits
 *
 * Return: The vlue of the bit at given index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, product;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	divisor = 1 << index;
	product = n & divisor;
	if (product == divisor)
	{
		return (1);
	}
	return (0);
}
