#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter on each element
 * @size: size of array
 * @action: funtcion pointer
 * @array: array
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
