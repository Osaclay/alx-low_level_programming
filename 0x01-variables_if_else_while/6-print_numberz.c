#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print all single numbers of base 10.
* Return: 0
*/

int main(void)
{
int num;

for (num = 48 ; num < 58 ; num++)
{
putchar(num);
}
putchar(10);
return (0);
}
