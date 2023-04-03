#include "lists.h"

/**
 * listint_len - prints all the elements of a listint list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
