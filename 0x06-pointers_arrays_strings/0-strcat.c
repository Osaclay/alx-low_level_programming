#include "main.h"

/**
*_strcat - concatenates two strings,
*appends the src string to the dest string.
* Return: returns poiner to the resulting dest string
*/

char *_strcat(char *dest, char *src)
{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
