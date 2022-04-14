#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 times 10.
 *
 * Return: Nothing!
 */
void more_numbers(void)
{
int i, j;
for (i = 0 ; i <= 14 ; i++)
{
j = i * 10;
_putchar(j + 48);
}
_putchar('\n');
}
