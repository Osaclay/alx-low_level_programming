#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'z' ; letra >= 'a' ; letra--)
{
putchar(letra);
}
putchar(10);
return (0);
}
