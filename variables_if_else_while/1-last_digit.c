#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: This function serves as the entry point to the program.
 *     * It generates a random number and prints information about its ld.
 *      *
 *       * Return: Always 0 (Success)
 *        **/
int main(void)
{
/* Your main function code here */
	int n, ld;

	srand(time(0));
		    n = rand() - RAND_MAX / 2;
		    ld = n % 10;

	if (ld > 5)
	{
		printf("ld of %i is %i and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("ld of %i is %i and is 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("ld of %i is %i and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
