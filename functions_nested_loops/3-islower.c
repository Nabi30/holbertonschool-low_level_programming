#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
/* Check if the character is within the lowercase range (a-z)*/
return (c >= 'a' && c <= 'z');
}
