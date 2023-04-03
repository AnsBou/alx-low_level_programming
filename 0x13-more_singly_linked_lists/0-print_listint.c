#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Parameter pointer to the head of the limked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
