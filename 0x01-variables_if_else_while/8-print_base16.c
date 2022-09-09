#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = '0' ; letra <= '9' ; letra++)
{
putchar(letra);
}

for (letra = 'a' ; letra <= 'f' ; letra++)
{
putchar(letra);
}

putchar(10);
return (0);
}
