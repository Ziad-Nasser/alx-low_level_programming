#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: number
 * @m: number
 * Return: the number of bits you would flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		counter += flip & 1;
		flip >>= 1;
	}
	return (counter);
}
