#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list
 *
 * @h: First head of the node
 *
 * Return: The length of the list
 */

size_t list_len(const list_t *h)
{
	int lenn = 0;

	while (h != NULL)
	{
		h = h->next;
		lenn++;
	}
	return (lenn);
}
