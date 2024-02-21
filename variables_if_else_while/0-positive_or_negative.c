#include <stdio.h>
#include <time.h>

/**
 *  * main - Entry point for the program
 *   *
 *    * Description: This program checks whether a given number is positive,
 *     *              negative, or zero.
 *      *
 *       * Return: Always 0 (Success)
 *        */
int main(void)
{
			int n;

		srand(time(0));
			 n = rand() - RAND_MAX / 2;
			/* my codes are here*/

		printf("The number %d is ", n);
	if (n > 0)
		rintf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");
	return (0);
}
