#include "main.h"

/**
 * clear_bit - sets the value of a bit at given index to 0
 * @n: a pointer to the bit
 * @index: the index to set the value at - indices start at 0
 *
 * Return: 1 if Success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
