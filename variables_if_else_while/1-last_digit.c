#include <stdlib.h>
#include <time.h>
/* Added the following header for printf */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Extract the last digit of the number */
	lastd = n % 10;

	/* Check if the last digit is less than 5 and not equal to 0 */

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
