#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be included in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *n_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;

if (n_node == NULL)
return (NULL);

n_node->n = n;
n_node->next = NULL;

if (*head == NULL)
{
n_node->prev = NULL;
*head = n_node;
return (n_node);
}

while (current->next != NULL)
current = current->next;

current->next = n_node;
n_node->prev = current;

return (n_node);
}
