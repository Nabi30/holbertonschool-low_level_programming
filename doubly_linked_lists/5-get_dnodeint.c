#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}

return (NULL);
}
