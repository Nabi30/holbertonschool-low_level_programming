#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description:
 * This function iterates through the lowercase letters from 'a' to 'z'
 * and prints each character using the _putchar function. After printing
 * all the letters, it adds a newline character to complete the output.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);/* Print the current letter*/
letter++;/* Move to the next letter*/
}
_putchar('\n');/* Print a newline character*/
}

