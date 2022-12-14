#include "main.h"

/**
* *_strcat - Concatenate two strings
* @dest: Destination string.
* @src: Source string.
* Return: Destinaton string dest.
*/

char *_strcat(char *dest, char *src)
{
int index, size;

for (size = 0; dest[size] != '\0'; size++)
;
for (index = size; src[index - size] != '\0'; index++)
dest[index] = src[index - size];
dest[index] = '\0';
return (dest);
}
