#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arg
 * @argv: array
 * Return: (0) or (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	s = argv[2];
	num1 = atoi(argv[3]);
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' && num2 == 0) || (*s == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(num1, num2));
	return (0);
}
