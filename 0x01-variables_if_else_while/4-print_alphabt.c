#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Except for 'e' and 'q' letters, print alpahbet in lower case.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'a' ; letra <= 'z' ; letra++)
{
if (letra == 'e' || letra == 'q')
{
continue;
}
else
{
putchar(letra);
}
}
putchar(10);
return (0);
}
