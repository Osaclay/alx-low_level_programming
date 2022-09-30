#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
* @argc: Number of arguments.
* @argv: Array of arguments.
* Return: 0 succes.
*/

int main(int argc, char *argv[])
{
int rmult;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
rmult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", rmult);
}

return (0);
