#include "main.h"
/**
 * set_bit - returns the value of a bit at a given index
 * @n: number
 * @index: number
 * Return: 1 or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n = *n & ~mask;

	return (1);
}
