#include "function_pointers.h"

/**
* print_name - a function that prints a name.
* @name: String with a name.
* @f: Funtion pointer.
* Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
