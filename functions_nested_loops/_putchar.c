#include <unistd.h>
/**_putchar - writes the character c ti stdiut
* @c : the character to print
* Return : On success 1.
* On error, -1 is returned, and error is set approptiately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
