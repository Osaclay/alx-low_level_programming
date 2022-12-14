#include "main.h"
#include <stdlib.h>

/**
* _strlen - Count the length of a string.
* @s: String.
* Return: Length.
*/

unsigned int _strlen(char *s)
{
unsigned int c;
for (c = 0; s[c]; c++)
;

return (c);
}

/**
* string_nconcat - a function that concatenates two strings
* @s1: String 1.
* @s2: String 2.
* @n: Number of characters of string 2.
* Return: Pointer points to a newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strcatn = NULL;
unsigned int size1, size2, i, j;

/*Convert null strings to empty string*/

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/*Allocate memory*/

size1 = _strlen(s1);
size2 = _strlen(s2);

if (n > size2)
n = size2;

strcatn = malloc(sizeof(char) * (size1 + n + 1));

if (strcatn == NULL)
return (NULL);

/*Concatenate*/

for (i = 0; s1[i] != '\0'; i++)
strcatn[i] = s1[i];

for (j = 0; j < n; j++)
strcatn[i + j] = s2[j];

strcatn[i + j] = '\0';

return (strcatn);
}
