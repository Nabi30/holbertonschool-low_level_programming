#include <stdio.h>
/**
 *  * main - main function
 *   *
 *    * Return: alaways (0)
 */
int main(void)
{
int i;
for (i = 0; i < 10; ++i)
{
putchar(i + '0'); /*Print the digit as a character*/
if (i < 9)
{
putchar(','); /*Separate with a comma*/
putchar(' '); /*Followed by a space*/
}
}
putchar('\n'); /* Print a newline character*/
return (0);
}
