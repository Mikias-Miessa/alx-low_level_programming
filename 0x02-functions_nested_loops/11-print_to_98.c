#include "main.h"
/**
 * print_to_98 - prints integers
 * @n: Number parameter
 * Return: Nothing.
 */
void print_to_98(int n)
{
int i;

for (i = n ; i <= 98 ; i++)
{
if (i == 98)
{
_putchar(i + 48);
}
_putchar(i + 48);
_putchar(',');
_putchar(' ');
}
}
