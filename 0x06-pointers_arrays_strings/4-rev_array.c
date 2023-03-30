#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		a[n] = a[i];
	}
}
