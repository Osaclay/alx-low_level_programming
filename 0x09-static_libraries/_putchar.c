#include <unistd.h>

/**
* _putchar - a function that writes
* the character c to stdout
* @c: the character to print
* Return: 1 if success or -1 if error.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
