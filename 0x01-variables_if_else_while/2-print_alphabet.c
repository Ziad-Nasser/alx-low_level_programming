#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}