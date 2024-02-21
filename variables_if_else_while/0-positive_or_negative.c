#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 *  * main - Entry point for the program
 *   *
 *    * Description: This program checks whether a given number is positive,
 *     *              negative, or zero.
 *      *
 *       * Return: Always 0 (Success)
 *        **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n == 0)
	{
		printf("%i is zero\n", n);
	} else
	{
		printf("%i is inegative\n", n);
	}
	return (0);
}
