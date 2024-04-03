#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the start of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h != NULL)

{
elements++;
h = h->next;
}

return (elements);
}
