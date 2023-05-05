#include "main.h"

/**
 * get_endianness - Checks for endianness
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
