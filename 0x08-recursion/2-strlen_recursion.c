
#include "main.h"

/**
* _strlen_recursion - a function that
* returns the length of a string
* @s: String
* Return: Length
*/

int _strlen_recursion(char *s)
{
int size;

if (*s != '\0')
{
size = _strlen_recursion(s + 1);
return (size + 1);
}
else
{
return (0);
}
}
