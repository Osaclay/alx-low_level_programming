#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - add two numbers
* @a: first number
* @b: second number
* Return: The sum.
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Calates the difference between 2 numbers.
* @a: first number
* @b: second number
* Return: The result.
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Caculates the multiplication of two numbers.
* @a: first number
* @b: second number
* Return: The result.
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Caculates the division of 2 numbers.
* @a: first number
* @b: second number
* Return: The result.
*/

int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf("Error\n");
exit(100);
}

/**
* op_mod - Caculates the module of 2 numbers.
* @a: first number
* @b: second number
* Return: The result.
*/

int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
printf("Error\n");
exit(100);
}
