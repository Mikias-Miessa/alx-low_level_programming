#include "main.h"
/**
 * print_square - printing square
 * @size: character
 *
 * Return: nothing.
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
_putchar('\n');
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
