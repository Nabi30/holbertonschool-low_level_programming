#include <stdio.h>
/**
 * main - main function
 *
 * Return: alaways (0)
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n'); /* Print a new line */
return (0);
}
