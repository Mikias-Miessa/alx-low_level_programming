#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n : number params
 * Return: 
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
	printf("%i, ", n);
	n++;
}
}
else if (n > 98)
{
while (n > 98)
{
	printf("%i, ", n);
	n--;
}
}
else
printf("98");
putchar('\n');
}
