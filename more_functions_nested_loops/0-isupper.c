#include "main.h"
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 *  Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
/* Check if the character is an uppercase letter (ASCII range: 65 to 90)*/
return (c >= 65 && c <= 90);
}

