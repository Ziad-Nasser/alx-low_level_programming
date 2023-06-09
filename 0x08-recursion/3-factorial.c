#include "main.h"

/**
 * factorial - returns factorial number
 * @n: the number we want to get its factorial
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
