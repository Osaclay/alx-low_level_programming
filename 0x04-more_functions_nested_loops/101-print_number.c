#include "main.h"

/**
* print_number - Prints an integer
* @n: number
*/

void print_number(int n)
{
unsigned int nx;

if (n % 10 < 0)
{
_putchar('-');
nx = -n;
}
else
nx = n;

if (nx < 10)
_putchar('0' + (nx % 10));
else
{
print_number(nx / 10);
_putchar('0' + (nx % 10));
}
}
