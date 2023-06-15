#include "lists.h"
/**
 * print_dlistint - function that prints all the elements
 * @h: pointer
 * Return: the number of nodes
 */
print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
