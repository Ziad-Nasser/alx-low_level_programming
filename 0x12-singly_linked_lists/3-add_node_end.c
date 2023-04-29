#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list_t
 * @head: a pointer to the head of a list_t
 * @str: string data
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	while (str[x])
	{
		x++;
	}
	newnode->len = x;
	newnode->next = NULL;
	temp = *head;
	if (temp  == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
