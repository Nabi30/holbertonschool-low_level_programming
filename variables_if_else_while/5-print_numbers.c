#include <stdio.h>

/**
 *   * main - Prints the numbers since 0 to 9
 *     *
 *       * Return: Always (Success)
 */
int main(void)
{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	}
	/* Ajout d'un saut de ligne pour une meilleure lisibilité */
		putchar('\n');
		return (0);
}
