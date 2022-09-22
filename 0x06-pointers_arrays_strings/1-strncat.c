#include "main.h"

/**
* *_strncat - Concatenates two strings
* @dest: Destination string.
* @src: Source string.
* @n: Bytes from src string.
* Return: Destination string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int index, size;

for (size = 0; dest[size] != '\0'; size++)
;
for (index = size;
n > 0 && src[index - size] != '\0';
index++, n--)
dest[index] = src[index - size];
dest[index] = '\0';
return (dest);
}
