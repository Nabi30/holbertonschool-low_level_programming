#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Using sizeof to obtain the size of data types.
 *     *
 *      * Return: Always 0 (Success)
 *       **/
int main(void)
{
		/* Utilisation de sizeof pour obtenir la taille des types de données */
		printf("Size of a char: %zu byte(s)\n", sizeof(char));
			printf("Size of an int: %zu byte(s)\n", sizeof(int));
				printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
					printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
						printf("Size of a float: %zu byte(s)\n", sizeof(float));

							return (0);
}
