#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
unsigned int len = 0;
while (str[len])
len++;
return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list_t list.
 * @str: The string to be duplicated and added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *temp;
char *dup_str;

if (head == NULL)
return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
free(dup_str);
return (NULL);
}

n_node->str = dup_str;
n_node->len = _strlen(dup_str);
n_node->next = NULL;

if (*head == NULL)
{
*head = n_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = n_node;
}

return (n_node);
}
