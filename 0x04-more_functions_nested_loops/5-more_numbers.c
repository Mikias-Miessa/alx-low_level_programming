#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 times 10.
 *
 * Return: Nothing!
 */
void more_numbers(void)
{
int i, j;
for (j = 0 ; j <= 9 ; j++)
{
for (i = 0 ; i <= 14 ; i++)
{
if (i >= 10)
_putchar('1');
_putchar(i % 10 + 48);
}
_putchar('\n');
}
}
