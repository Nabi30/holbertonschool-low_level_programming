#include "main.h"
/**
 * * main - check 1-alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
/*create a string with _putchar and a new lin*/
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
