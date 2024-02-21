#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main(void) {
    int n, lastDigit;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number (you don't need to understand this part)
    n = rand();

    // Extract the last digit of n
    lastDigit = n % 10;

    // Print the desired output
    printf("Last digit of %d is: %d\n", n, lastDigit);

    return 0;
}
