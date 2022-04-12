#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Number param
 * Return: The products
 */
void print_times_table(int n)
{
int i, j, a;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
_putchar(48);
continue;
}
a = i * j;
_putchar(',');
_putchar(' ');
if (a >= 10 && a < 100)
{
_putchar(' ');
_putchar(a / 10 + 48);
_putchar(a % 10 + 48);
}
else if (a >= 100)
{
_putchar((a / 100) + 48);
_putchar(((a % 100) / 10) + 48);
_putchar(a % 10 + 48);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(p + 48);
}
}
_putchar('\n');
}
}
}
