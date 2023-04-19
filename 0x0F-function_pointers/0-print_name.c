#include "function_pointers.h"
/**
 * print_name - prints name.
 * @name: char pointer
 * @f: funtcion pointer
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
