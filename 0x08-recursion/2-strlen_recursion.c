#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string we want to determine.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
