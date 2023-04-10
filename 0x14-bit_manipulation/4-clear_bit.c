#include "main.h"
/**
 * clear_bit - Sets the value of a givern bit to 0.
 * @n: a pointer to the number to change.
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}