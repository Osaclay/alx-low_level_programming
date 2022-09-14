#include "main.h"

/**
* _isalpha - checks for alphabetic character.
* @c: Charater to check
* Return: 1 if c is lowercase or uppercase, else return 0.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
