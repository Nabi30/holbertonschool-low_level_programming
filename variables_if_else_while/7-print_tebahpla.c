#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char zyx;
    /*Print the lowercase alphabet in reverse*/
for (zyx = 'z'; zyx >= 'a' ; zyx--)
{
putchar(zyx); /*Print each character */
}
putchar('\n'); /* Print a newline character */
return (0);
}
