#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number; i++)
	{
		printf("%02hhx", *((char *) main + i));
		if (i + 1 != number)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
