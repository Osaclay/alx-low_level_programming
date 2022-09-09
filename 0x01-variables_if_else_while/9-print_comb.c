#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
* Return: 0
*/

int main(void)
{
int num;

for (num = 48 ; num < 58 ; num++)
{
putchar(num);
if (num < 57)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
