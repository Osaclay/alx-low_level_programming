#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits, 000 to 999.
* Return: 0
*/

int main(void)
{
int num1, num2, num3;
for (num1 = '0' ; num1 <= '9' ; num1++)
{
num2 = num1 + 1;
for (; num2 <= '9' ; num2++)
{
num3 = num2 + 1;
for (; num3 <= '9'; num3++)
{
putchar(num1);
putchar(num2);
putchar(num3);
if (num1 == '7' && num2 == '8' && num3 == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar(10);
return (0);
}
