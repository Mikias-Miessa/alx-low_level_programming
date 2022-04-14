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
_putchar(i + 48);
}
_putchar('\n');
}
_putchar('\n');
}
