#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, a_money, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a_money = atoi(argv[1]);
	if (a_money < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		coins += a_money / cents[i];
		a_money %= cents[i];
		if (a_money % cents[i] == 0)
		{
			break;
		}
	}
	printf("%d\n", coins);
	return (0);
}
