#include "main.h"

/**
* _memset - a function that fills memory with a constant byte.
* @s: Pointer to the memory area s.
* @b: Constant byte.
* @n: Numbers of the bytes.
* Return: A pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
for (; n; n--)
{
s[n - 1] = b;
}
return (s);
}
