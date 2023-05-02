#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
