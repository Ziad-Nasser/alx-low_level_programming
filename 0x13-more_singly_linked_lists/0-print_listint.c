#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
